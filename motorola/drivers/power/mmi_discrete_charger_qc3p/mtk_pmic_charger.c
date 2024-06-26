/*
 * Copyright (c) 2018 Motorola Mobility, LLC.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <linux/module.h>
#include <linux/stat.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/ctype.h>
#include "mmi_charger_class.h"
#include <linux/power_supply.h>
#include "mmi_charger_core.h"

#include "bq2597x_charger.h"

enum sgm_property {
	SGM_PROP_CHARGING_ENABLED,
	SGM_PROP_INPUT_CURRENT_NOW,
};

#ifdef CONFIG_MOTO_CHARGER_SGM415XX
extern int sgm_get_int_property(enum sgm_property bp);
extern int sgm_get_property(enum sgm_property bp,int *val);
#endif

int __weak sgm_get_property_dumy(enum sgm_property bp,int *val)
{
       return 0;
}

static int mtk_pmic_is_charging_enabled(struct mmi_charger_device *chrg, bool *en)
{
	int rc,enable;
#ifdef CONFIG_MOTO_CHARGER_SGM415XX
	rc = sgm_get_property(SGM_PROP_CHARGING_ENABLED,&enable);
#else
	rc = sgm_get_property_dumy(SGM_PROP_CHARGING_ENABLED,&enable);
#endif
	if (!rc) {
		chrg->charger_enabled = !!enable;
	} else {
		chrg->charger_enabled = false;
	}
	*en = chrg->charger_enabled;
	chrg_dev_info(chrg, "mtk_pmic_is_charging_enabled enable = %d\n",*en);

	return 0;
}

static int mtk_pmic_get_input_voltage_settled(struct mmi_charger_device *chrg, u32 *uA)
{
	int rc;
	union power_supply_propval prop = {0,};

	if (!chrg->chrg_psy)
		return -ENODEV;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_VOLTAGE_NOW, &prop);
	if (!rc)
		*uA = !!prop.intval;

	return rc;
}

static int mtk_pmic_get_input_current(struct mmi_charger_device *chrg, u32 *uA)
{
	int rc;
	union power_supply_propval prop = {0,};

	if (!chrg->chrg_psy)
		return -ENODEV;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT, &prop);
	if (!rc)
		*uA = !!prop.intval;

	return rc;
}

static int mtk_pmic_get_charging_current(struct mmi_charger_device *chrg, u32 *uA)
{
	int rc;
	union power_supply_propval prop = {0,};

	if (!chrg->chrg_psy)
		return -ENODEV;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_CURRENT_NOW, &prop);
	if (!rc)
		*uA = !!prop.intval;

	return rc;
}

static int mtk_pmic_set_charging_current(struct mmi_charger_device *chrg, u32 uA)
{
	int rc;
	union power_supply_propval prop = {0,};
	struct power_supply	*usb_psy;
	struct power_supply	*chg_psy;

	usb_psy = power_supply_get_by_name("sgm4154x-charger");
	if (!usb_psy)
		return -ENODEV;


	prop.intval = uA;
	rc = power_supply_set_property(usb_psy,
				POWER_SUPPLY_PROP_CURRENT_MAX, &prop);

	chg_psy = power_supply_get_by_name("mtk-master-charger");
	if (!chg_psy)
		return -ENODEV;

	prop.intval = uA;
	rc = power_supply_set_property(chg_psy,
				POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT, &prop);

	return rc;
}

static int mtk_pmic_update_charger_status(struct mmi_charger_device *chrg)
{
	int rc,vbus,ibus,enable;
	struct power_supply	*usb_psy;
	union power_supply_propval prop = {0,};
	struct power_supply	*cp_psy;

	chrg_dev_info(chrg, "mtk_pmic_update_charger_status enter");

	if (!chrg->chrg_psy)
		return -ENODEV;
	chrg_dev_info(chrg, "mtk_pmic_update_charger_status enter 1");
	usb_psy = power_supply_get_by_name("sgm4154x-charger");
	if (!usb_psy)
		return -ENODEV;

	cp_psy = power_supply_get_by_name("bq2597x-standalone");
	if (!cp_psy)
		return -ENODEV;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_VOLTAGE_NOW, &prop);
	if (!rc)
		chrg->charger_data.vbatt_volt = prop.intval;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_CURRENT_NOW, &prop);
	if (!rc)
		chrg->charger_data.ibatt_curr = prop.intval * -1;

	rc = power_supply_get_property(chrg->chrg_psy,
				POWER_SUPPLY_PROP_TEMP, &prop);
	if (!rc)
		chrg->charger_data.batt_temp = prop.intval / 10;

	rc = bq2597x_get_property(BQ2597X_PROP_INPUT_VOLTAGE_SETTLED,&vbus);
	if (!rc) {
		chrg->charger_data.vbus_volt = vbus*1000;
	}

#ifdef CONFIG_MOTO_CHARGER_SGM415XX
	rc = sgm_get_property_dumy(SGM_PROP_INPUT_CURRENT_NOW,&ibus);
	if (!rc) {
		chrg->charger_data.ibus_curr = 200; //Force return 200mA input charging current of main charger.
	}
#else
	rc = sgm_get_property_dumy(SGM_PROP_INPUT_CURRENT_NOW,&ibus); //Read real ibus
#endif

	rc = power_supply_get_property(usb_psy,
				POWER_SUPPLY_PROP_ONLINE, &prop);
	if (!rc)
		chrg->charger_data.vbus_pres = !!prop.intval;

#ifdef CONFIG_MOTO_CHARGER_SGM415XX
	rc = sgm_get_property(SGM_PROP_CHARGING_ENABLED,&enable);
	if (!rc) {
		chrg->charger_enabled  = !!enable;
		chrg_dev_info(chrg, "sgm_get_property(SGM_PROP_CHARGING_ENABLED,&enable) %d\n",enable);
	}
#else
	rc = sgm_get_property_dumy(SGM_PROP_CHARGING_ENABLED,&enable);
#endif
	chrg_dev_info(chrg, "mtk SW chrg: status update: --- info---1");
	chrg_dev_info(chrg, "vbatt %d\n", chrg->charger_data.vbatt_volt);
	chrg_dev_info(chrg, "ibatt %d\n", chrg->charger_data.ibatt_curr);
	chrg_dev_info(chrg, "batt temp %d\n", chrg->charger_data.batt_temp);
	chrg_dev_info(chrg, "vbus %d\n", chrg->charger_data.vbus_volt);
	chrg_dev_info(chrg, "ibus %d\n", chrg->charger_data.ibus_curr);
	chrg_dev_info(chrg, "vbus pres %d\n", chrg->charger_data.vbus_pres);
	chrg_dev_info(chrg, "charger_enabled %d\n", chrg->charger_enabled);
	chrg_dev_info(chrg, "charger_limited %d\n", chrg->charger_limited);
	return rc;
}

struct mmi_charger_ops mtk_pmic_charger_ops = {
	.is_enabled = mtk_pmic_is_charging_enabled,
	.get_input_voltage_settled = mtk_pmic_get_input_voltage_settled,
	.get_input_current = mtk_pmic_get_input_current,
	.get_charging_current = mtk_pmic_get_charging_current,
	.set_charging_current = mtk_pmic_set_charging_current,
	.update_charger_status = mtk_pmic_update_charger_status,
};
