/*************************************************************************/ /*!
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/


#ifndef _PDP2_MMU_REGS_H
#define _PDP2_MMU_REGS_H

/* Hardware register definitions */

#define PDP_BIF_DIR_BASE_ADDR_OFFSET		(0x0020)
#define PDP_BIF_DIR_BASE_ADDR_STRIDE		(4)
#define PDP_BIF_DIR_BASE_ADDR_NO_ENTRIES		(4)

/* PDP_BIF, DIR_BASE_ADDR, MMU_DIR_BASE_ADDR
Base address in physical memory for MMU Directory n Entries. When MMU_ENABLE_EXT_ADDRESSING is '1', the bits 31:0 are assigned to the address 31+EXT_ADDR_RANGE:0+EXT_ADDR_RANGE, but then any address offset within a page is forced to 0. When MMU_ENABLE_EXT_ADDRESSING is '0', bits 31:12 are assigned to address 31:12
*/
#define PDP_BIF_DIR_BASE_ADDR_MMU_DIR_BASE_ADDR_MASK		(0xFFFFFFFF)
#define PDP_BIF_DIR_BASE_ADDR_MMU_DIR_BASE_ADDR_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_DIR_BASE_ADDR_MMU_DIR_BASE_ADDR_SHIFT		(0)
#define PDP_BIF_DIR_BASE_ADDR_MMU_DIR_BASE_ADDR_LENGTH		(32)
#define PDP_BIF_DIR_BASE_ADDR_MMU_DIR_BASE_ADDR_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TILE_CFG_OFFSET		(0x0040)
#define PDP_BIF_TILE_CFG_STRIDE		(4)
#define PDP_BIF_TILE_CFG_NO_ENTRIES		(4)

/* PDP_BIF, TILE_CFG, TILE_128INTERLEAVE
*/
#define PDP_BIF_TILE_CFG_TILE_128INTERLEAVE_MASK		(0x00000010)
#define PDP_BIF_TILE_CFG_TILE_128INTERLEAVE_LSBMASK		(0x00000001)
#define PDP_BIF_TILE_CFG_TILE_128INTERLEAVE_SHIFT		(4)
#define PDP_BIF_TILE_CFG_TILE_128INTERLEAVE_LENGTH		(1)
#define PDP_BIF_TILE_CFG_TILE_128INTERLEAVE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, TILE_CFG, TILE_ENABLE
*/
#define PDP_BIF_TILE_CFG_TILE_ENABLE_MASK		(0x00000008)
#define PDP_BIF_TILE_CFG_TILE_ENABLE_LSBMASK		(0x00000001)
#define PDP_BIF_TILE_CFG_TILE_ENABLE_SHIFT		(3)
#define PDP_BIF_TILE_CFG_TILE_ENABLE_LENGTH		(1)
#define PDP_BIF_TILE_CFG_TILE_ENABLE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, TILE_CFG, TILE_STRIDE
*/
#define PDP_BIF_TILE_CFG_TILE_STRIDE_MASK		(0x00000007)
#define PDP_BIF_TILE_CFG_TILE_STRIDE_LSBMASK		(0x00000007)
#define PDP_BIF_TILE_CFG_TILE_STRIDE_SHIFT		(0)
#define PDP_BIF_TILE_CFG_TILE_STRIDE_LENGTH		(3)
#define PDP_BIF_TILE_CFG_TILE_STRIDE_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TILE_MIN_ADDR_OFFSET		(0x0050)
#define PDP_BIF_TILE_MIN_ADDR_STRIDE		(4)
#define PDP_BIF_TILE_MIN_ADDR_NO_ENTRIES		(4)

/* PDP_BIF, TILE_MIN_ADDR, TILE_MIN_ADDR
*/
#define PDP_BIF_TILE_MIN_ADDR_TILE_MIN_ADDR_MASK		(0xFFFFFFFF)
#define PDP_BIF_TILE_MIN_ADDR_TILE_MIN_ADDR_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_TILE_MIN_ADDR_TILE_MIN_ADDR_SHIFT		(0)
#define PDP_BIF_TILE_MIN_ADDR_TILE_MIN_ADDR_LENGTH		(32)
#define PDP_BIF_TILE_MIN_ADDR_TILE_MIN_ADDR_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TILE_MAX_ADDR_OFFSET		(0x0060)
#define PDP_BIF_TILE_MAX_ADDR_STRIDE		(4)
#define PDP_BIF_TILE_MAX_ADDR_NO_ENTRIES		(4)

/* PDP_BIF, TILE_MAX_ADDR, TILE_MAX_ADDR
*/
#define PDP_BIF_TILE_MAX_ADDR_TILE_MAX_ADDR_MASK		(0xFFFFFFFF)
#define PDP_BIF_TILE_MAX_ADDR_TILE_MAX_ADDR_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_TILE_MAX_ADDR_TILE_MAX_ADDR_SHIFT		(0)
#define PDP_BIF_TILE_MAX_ADDR_TILE_MAX_ADDR_LENGTH		(32)
#define PDP_BIF_TILE_MAX_ADDR_TILE_MAX_ADDR_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_CONTROL0_OFFSET		(0x0000)

/* PDP_BIF, CONTROL0, MMU_TILING_SCHEME
*/
#define PDP_BIF_CONTROL0_MMU_TILING_SCHEME_MASK		(0x00000001)
#define PDP_BIF_CONTROL0_MMU_TILING_SCHEME_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL0_MMU_TILING_SCHEME_SHIFT		(0)
#define PDP_BIF_CONTROL0_MMU_TILING_SCHEME_LENGTH		(1)
#define PDP_BIF_CONTROL0_MMU_TILING_SCHEME_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL0, MMU_CACHE_POLICY
*/
#define PDP_BIF_CONTROL0_MMU_CACHE_POLICY_MASK		(0x00000100)
#define PDP_BIF_CONTROL0_MMU_CACHE_POLICY_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL0_MMU_CACHE_POLICY_SHIFT		(8)
#define PDP_BIF_CONTROL0_MMU_CACHE_POLICY_LENGTH		(1)
#define PDP_BIF_CONTROL0_MMU_CACHE_POLICY_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL0, FORCE_CACHE_POLICY_BYPASS
*/
#define PDP_BIF_CONTROL0_FORCE_CACHE_POLICY_BYPASS_MASK		(0x00000200)
#define PDP_BIF_CONTROL0_FORCE_CACHE_POLICY_BYPASS_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL0_FORCE_CACHE_POLICY_BYPASS_SHIFT		(9)
#define PDP_BIF_CONTROL0_FORCE_CACHE_POLICY_BYPASS_LENGTH		(1)
#define PDP_BIF_CONTROL0_FORCE_CACHE_POLICY_BYPASS_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL0, STALL_ON_PROTOCOL_FAULT
*/
#define PDP_BIF_CONTROL0_STALL_ON_PROTOCOL_FAULT_MASK		(0x00001000)
#define PDP_BIF_CONTROL0_STALL_ON_PROTOCOL_FAULT_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL0_STALL_ON_PROTOCOL_FAULT_SHIFT		(12)
#define PDP_BIF_CONTROL0_STALL_ON_PROTOCOL_FAULT_LENGTH		(1)
#define PDP_BIF_CONTROL0_STALL_ON_PROTOCOL_FAULT_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_CONTROL1_OFFSET		(0x0008)

/* PDP_BIF, CONTROL1, MMU_FLUSH0
*/
#define PDP_BIF_CONTROL1_MMU_FLUSH0_MASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FLUSH0_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FLUSH0_SHIFT		(0)
#define PDP_BIF_CONTROL1_MMU_FLUSH0_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_FLUSH0_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_FLUSH1
*/
#define PDP_BIF_CONTROL1_MMU_FLUSH1_MASK		(0x00000002)
#define PDP_BIF_CONTROL1_MMU_FLUSH1_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FLUSH1_SHIFT		(1)
#define PDP_BIF_CONTROL1_MMU_FLUSH1_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_FLUSH1_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_FLUSH2
*/
#define PDP_BIF_CONTROL1_MMU_FLUSH2_MASK		(0x00000004)
#define PDP_BIF_CONTROL1_MMU_FLUSH2_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FLUSH2_SHIFT		(2)
#define PDP_BIF_CONTROL1_MMU_FLUSH2_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_FLUSH2_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_FLUSH3
*/
#define PDP_BIF_CONTROL1_MMU_FLUSH3_MASK		(0x00000008)
#define PDP_BIF_CONTROL1_MMU_FLUSH3_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FLUSH3_SHIFT		(3)
#define PDP_BIF_CONTROL1_MMU_FLUSH3_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_FLUSH3_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_INVALDC0
*/
#define PDP_BIF_CONTROL1_MMU_INVALDC0_MASK		(0x00000100)
#define PDP_BIF_CONTROL1_MMU_INVALDC0_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_INVALDC0_SHIFT		(8)
#define PDP_BIF_CONTROL1_MMU_INVALDC0_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_INVALDC0_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_INVALDC1
*/
#define PDP_BIF_CONTROL1_MMU_INVALDC1_MASK		(0x00000200)
#define PDP_BIF_CONTROL1_MMU_INVALDC1_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_INVALDC1_SHIFT		(9)
#define PDP_BIF_CONTROL1_MMU_INVALDC1_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_INVALDC1_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_INVALDC2
*/
#define PDP_BIF_CONTROL1_MMU_INVALDC2_MASK		(0x00000400)
#define PDP_BIF_CONTROL1_MMU_INVALDC2_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_INVALDC2_SHIFT		(10)
#define PDP_BIF_CONTROL1_MMU_INVALDC2_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_INVALDC2_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_INVALDC3
*/
#define PDP_BIF_CONTROL1_MMU_INVALDC3_MASK		(0x00000800)
#define PDP_BIF_CONTROL1_MMU_INVALDC3_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_INVALDC3_SHIFT		(11)
#define PDP_BIF_CONTROL1_MMU_INVALDC3_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_INVALDC3_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_FAULT_CLEAR
*/
#define PDP_BIF_CONTROL1_MMU_FAULT_CLEAR_MASK		(0x00010000)
#define PDP_BIF_CONTROL1_MMU_FAULT_CLEAR_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_FAULT_CLEAR_SHIFT		(16)
#define PDP_BIF_CONTROL1_MMU_FAULT_CLEAR_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_FAULT_CLEAR_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, PROTOCOL_FAULT_CLEAR
*/
#define PDP_BIF_CONTROL1_PROTOCOL_FAULT_CLEAR_MASK		(0x00100000)
#define PDP_BIF_CONTROL1_PROTOCOL_FAULT_CLEAR_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_PROTOCOL_FAULT_CLEAR_SHIFT		(20)
#define PDP_BIF_CONTROL1_PROTOCOL_FAULT_CLEAR_LENGTH		(1)
#define PDP_BIF_CONTROL1_PROTOCOL_FAULT_CLEAR_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_PAUSE_SET
*/
#define PDP_BIF_CONTROL1_MMU_PAUSE_SET_MASK		(0x01000000)
#define PDP_BIF_CONTROL1_MMU_PAUSE_SET_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_PAUSE_SET_SHIFT		(24)
#define PDP_BIF_CONTROL1_MMU_PAUSE_SET_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_PAUSE_SET_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_PAUSE_CLEAR
*/
#define PDP_BIF_CONTROL1_MMU_PAUSE_CLEAR_MASK		(0x02000000)
#define PDP_BIF_CONTROL1_MMU_PAUSE_CLEAR_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_PAUSE_CLEAR_SHIFT		(25)
#define PDP_BIF_CONTROL1_MMU_PAUSE_CLEAR_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_PAUSE_CLEAR_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONTROL1, MMU_SOFT_RESET
*/
#define PDP_BIF_CONTROL1_MMU_SOFT_RESET_MASK		(0x10000000)
#define PDP_BIF_CONTROL1_MMU_SOFT_RESET_LSBMASK		(0x00000001)
#define PDP_BIF_CONTROL1_MMU_SOFT_RESET_SHIFT		(28)
#define PDP_BIF_CONTROL1_MMU_SOFT_RESET_LENGTH		(1)
#define PDP_BIF_CONTROL1_MMU_SOFT_RESET_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_BANK_INDEX_OFFSET		(0x0010)

/* PDP_BIF, BANK_INDEX, MMU_BANK_INDEX
*/
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_MASK		(0xC0000000)
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_LSBMASK		(0x00000003)
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_SHIFT		(30)
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_LENGTH		(2)
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_SIGNED_FIELD	IMG_FALSE
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_NO_REPS		(16)
#define PDP_BIF_BANK_INDEX_MMU_BANK_INDEX_SIZE		(2)

#define PDP_BIF_REQUEST_PRIORITY_ENABLE_OFFSET		(0x0018)

/* PDP_BIF, REQUEST_PRIORITY_ENABLE, CMD_PRIORITY_ENABLE
*/
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_MASK		(0x00008000)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_LSBMASK		(0x00000001)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_SHIFT		(15)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_LENGTH		(1)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_SIGNED_FIELD	IMG_FALSE
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_NO_REPS		(16)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_PRIORITY_ENABLE_SIZE		(1)

/* PDP_BIF, REQUEST_PRIORITY_ENABLE, CMD_MMU_PRIORITY_ENABLE
*/
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_MMU_PRIORITY_ENABLE_MASK		(0x00010000)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_MMU_PRIORITY_ENABLE_LSBMASK		(0x00000001)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_MMU_PRIORITY_ENABLE_SHIFT		(16)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_MMU_PRIORITY_ENABLE_LENGTH		(1)
#define PDP_BIF_REQUEST_PRIORITY_ENABLE_CMD_MMU_PRIORITY_ENABLE_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_OFFSET		(0x001C)

/* PDP_BIF, REQUEST_LIMITED_THROUGHPUT, LIMITED_WORDS
*/
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_LIMITED_WORDS_MASK		(0x000003FF)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_LIMITED_WORDS_LSBMASK		(0x000003FF)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_LIMITED_WORDS_SHIFT		(0)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_LIMITED_WORDS_LENGTH		(10)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_LIMITED_WORDS_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, REQUEST_LIMITED_THROUGHPUT, REQUEST_GAP
*/
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_REQUEST_GAP_MASK		(0x0FFF0000)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_REQUEST_GAP_LSBMASK		(0x00000FFF)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_REQUEST_GAP_SHIFT		(16)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_REQUEST_GAP_LENGTH		(12)
#define PDP_BIF_REQUEST_LIMITED_THROUGHPUT_REQUEST_GAP_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_ADDRESS_CONTROL_OFFSET		(0x0070)

/* PDP_BIF, ADDRESS_CONTROL, MMU_BYPASS
*/
#define PDP_BIF_ADDRESS_CONTROL_MMU_BYPASS_MASK		(0x00000001)
#define PDP_BIF_ADDRESS_CONTROL_MMU_BYPASS_LSBMASK		(0x00000001)
#define PDP_BIF_ADDRESS_CONTROL_MMU_BYPASS_SHIFT		(0)
#define PDP_BIF_ADDRESS_CONTROL_MMU_BYPASS_LENGTH		(1)
#define PDP_BIF_ADDRESS_CONTROL_MMU_BYPASS_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, ADDRESS_CONTROL, MMU_ENABLE_EXT_ADDRESSING
*/
#define PDP_BIF_ADDRESS_CONTROL_MMU_ENABLE_EXT_ADDRESSING_MASK		(0x00000010)
#define PDP_BIF_ADDRESS_CONTROL_MMU_ENABLE_EXT_ADDRESSING_LSBMASK		(0x00000001)
#define PDP_BIF_ADDRESS_CONTROL_MMU_ENABLE_EXT_ADDRESSING_SHIFT		(4)
#define PDP_BIF_ADDRESS_CONTROL_MMU_ENABLE_EXT_ADDRESSING_LENGTH		(1)
#define PDP_BIF_ADDRESS_CONTROL_MMU_ENABLE_EXT_ADDRESSING_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, ADDRESS_CONTROL, UPPER_ADDRESS_FIXED
*/
#define PDP_BIF_ADDRESS_CONTROL_UPPER_ADDRESS_FIXED_MASK		(0x00FF0000)
#define PDP_BIF_ADDRESS_CONTROL_UPPER_ADDRESS_FIXED_LSBMASK		(0x000000FF)
#define PDP_BIF_ADDRESS_CONTROL_UPPER_ADDRESS_FIXED_SHIFT		(16)
#define PDP_BIF_ADDRESS_CONTROL_UPPER_ADDRESS_FIXED_LENGTH		(8)
#define PDP_BIF_ADDRESS_CONTROL_UPPER_ADDRESS_FIXED_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_CONFIG0_OFFSET		(0x0080)

/* PDP_BIF, CONFIG0, NUM_REQUESTORS
*/
#define PDP_BIF_CONFIG0_NUM_REQUESTORS_MASK		(0x0000000F)
#define PDP_BIF_CONFIG0_NUM_REQUESTORS_LSBMASK		(0x0000000F)
#define PDP_BIF_CONFIG0_NUM_REQUESTORS_SHIFT		(0)
#define PDP_BIF_CONFIG0_NUM_REQUESTORS_LENGTH		(4)
#define PDP_BIF_CONFIG0_NUM_REQUESTORS_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, EXTENDED_ADDR_RANGE
*/
#define PDP_BIF_CONFIG0_EXTENDED_ADDR_RANGE_MASK		(0x000000F0)
#define PDP_BIF_CONFIG0_EXTENDED_ADDR_RANGE_LSBMASK		(0x0000000F)
#define PDP_BIF_CONFIG0_EXTENDED_ADDR_RANGE_SHIFT		(4)
#define PDP_BIF_CONFIG0_EXTENDED_ADDR_RANGE_LENGTH		(4)
#define PDP_BIF_CONFIG0_EXTENDED_ADDR_RANGE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, GROUP_OVERRIDE_SIZE
*/
#define PDP_BIF_CONFIG0_GROUP_OVERRIDE_SIZE_MASK		(0x00000700)
#define PDP_BIF_CONFIG0_GROUP_OVERRIDE_SIZE_LSBMASK		(0x00000007)
#define PDP_BIF_CONFIG0_GROUP_OVERRIDE_SIZE_SHIFT		(8)
#define PDP_BIF_CONFIG0_GROUP_OVERRIDE_SIZE_LENGTH		(3)
#define PDP_BIF_CONFIG0_GROUP_OVERRIDE_SIZE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, ADDR_COHERENCY_SUPPORTED
*/
#define PDP_BIF_CONFIG0_ADDR_COHERENCY_SUPPORTED_MASK		(0x00001000)
#define PDP_BIF_CONFIG0_ADDR_COHERENCY_SUPPORTED_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG0_ADDR_COHERENCY_SUPPORTED_SHIFT		(12)
#define PDP_BIF_CONFIG0_ADDR_COHERENCY_SUPPORTED_LENGTH		(1)
#define PDP_BIF_CONFIG0_ADDR_COHERENCY_SUPPORTED_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, MMU_SUPPORTED
*/
#define PDP_BIF_CONFIG0_MMU_SUPPORTED_MASK		(0x00002000)
#define PDP_BIF_CONFIG0_MMU_SUPPORTED_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG0_MMU_SUPPORTED_SHIFT		(13)
#define PDP_BIF_CONFIG0_MMU_SUPPORTED_LENGTH		(1)
#define PDP_BIF_CONFIG0_MMU_SUPPORTED_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, TILE_ADDR_GRANULARITY
*/
#define PDP_BIF_CONFIG0_TILE_ADDR_GRANULARITY_MASK		(0x001F0000)
#define PDP_BIF_CONFIG0_TILE_ADDR_GRANULARITY_LSBMASK		(0x0000001F)
#define PDP_BIF_CONFIG0_TILE_ADDR_GRANULARITY_SHIFT		(16)
#define PDP_BIF_CONFIG0_TILE_ADDR_GRANULARITY_LENGTH		(5)
#define PDP_BIF_CONFIG0_TILE_ADDR_GRANULARITY_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, NO_READ_REORDER
*/
#define PDP_BIF_CONFIG0_NO_READ_REORDER_MASK		(0x00200000)
#define PDP_BIF_CONFIG0_NO_READ_REORDER_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG0_NO_READ_REORDER_SHIFT		(21)
#define PDP_BIF_CONFIG0_NO_READ_REORDER_LENGTH		(1)
#define PDP_BIF_CONFIG0_NO_READ_REORDER_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG0, TAGS_SUPPORTED
*/
#define PDP_BIF_CONFIG0_TAGS_SUPPORTED_MASK		(0xFFC00000)
#define PDP_BIF_CONFIG0_TAGS_SUPPORTED_LSBMASK		(0x000003FF)
#define PDP_BIF_CONFIG0_TAGS_SUPPORTED_SHIFT		(22)
#define PDP_BIF_CONFIG0_TAGS_SUPPORTED_LENGTH		(10)
#define PDP_BIF_CONFIG0_TAGS_SUPPORTED_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_CONFIG1_OFFSET		(0x0084)

/* PDP_BIF, CONFIG1, PAGE_SIZE
*/
#define PDP_BIF_CONFIG1_PAGE_SIZE_MASK		(0x0000000F)
#define PDP_BIF_CONFIG1_PAGE_SIZE_LSBMASK		(0x0000000F)
#define PDP_BIF_CONFIG1_PAGE_SIZE_SHIFT		(0)
#define PDP_BIF_CONFIG1_PAGE_SIZE_LENGTH		(4)
#define PDP_BIF_CONFIG1_PAGE_SIZE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, PAGE_CACHE_ENTRIES
*/
#define PDP_BIF_CONFIG1_PAGE_CACHE_ENTRIES_MASK		(0x0000FF00)
#define PDP_BIF_CONFIG1_PAGE_CACHE_ENTRIES_LSBMASK		(0x000000FF)
#define PDP_BIF_CONFIG1_PAGE_CACHE_ENTRIES_SHIFT		(8)
#define PDP_BIF_CONFIG1_PAGE_CACHE_ENTRIES_LENGTH		(8)
#define PDP_BIF_CONFIG1_PAGE_CACHE_ENTRIES_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, DIR_CACHE_ENTRIES
*/
#define PDP_BIF_CONFIG1_DIR_CACHE_ENTRIES_MASK		(0x001F0000)
#define PDP_BIF_CONFIG1_DIR_CACHE_ENTRIES_LSBMASK		(0x0000001F)
#define PDP_BIF_CONFIG1_DIR_CACHE_ENTRIES_SHIFT		(16)
#define PDP_BIF_CONFIG1_DIR_CACHE_ENTRIES_LENGTH		(5)
#define PDP_BIF_CONFIG1_DIR_CACHE_ENTRIES_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, BANDWIDTH_COUNT_SUPPORTED
*/
#define PDP_BIF_CONFIG1_BANDWIDTH_COUNT_SUPPORTED_MASK		(0x01000000)
#define PDP_BIF_CONFIG1_BANDWIDTH_COUNT_SUPPORTED_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG1_BANDWIDTH_COUNT_SUPPORTED_SHIFT		(24)
#define PDP_BIF_CONFIG1_BANDWIDTH_COUNT_SUPPORTED_LENGTH		(1)
#define PDP_BIF_CONFIG1_BANDWIDTH_COUNT_SUPPORTED_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, STALL_COUNT_SUPPORTED
*/
#define PDP_BIF_CONFIG1_STALL_COUNT_SUPPORTED_MASK		(0x02000000)
#define PDP_BIF_CONFIG1_STALL_COUNT_SUPPORTED_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG1_STALL_COUNT_SUPPORTED_SHIFT		(25)
#define PDP_BIF_CONFIG1_STALL_COUNT_SUPPORTED_LENGTH		(1)
#define PDP_BIF_CONFIG1_STALL_COUNT_SUPPORTED_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, LATENCY_COUNT_SUPPORTED
*/
#define PDP_BIF_CONFIG1_LATENCY_COUNT_SUPPORTED_MASK		(0x04000000)
#define PDP_BIF_CONFIG1_LATENCY_COUNT_SUPPORTED_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG1_LATENCY_COUNT_SUPPORTED_SHIFT		(26)
#define PDP_BIF_CONFIG1_LATENCY_COUNT_SUPPORTED_LENGTH		(1)
#define PDP_BIF_CONFIG1_LATENCY_COUNT_SUPPORTED_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, CONFIG1, SUPPORT_READ_INTERLEAVE
*/
#define PDP_BIF_CONFIG1_SUPPORT_READ_INTERLEAVE_MASK		(0x10000000)
#define PDP_BIF_CONFIG1_SUPPORT_READ_INTERLEAVE_LSBMASK		(0x00000001)
#define PDP_BIF_CONFIG1_SUPPORT_READ_INTERLEAVE_SHIFT		(28)
#define PDP_BIF_CONFIG1_SUPPORT_READ_INTERLEAVE_LENGTH		(1)
#define PDP_BIF_CONFIG1_SUPPORT_READ_INTERLEAVE_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_STATUS0_OFFSET		(0x0088)

/* PDP_BIF, STATUS0, MMU_PF_N_RW
*/
#define PDP_BIF_STATUS0_MMU_PF_N_RW_MASK		(0x00000001)
#define PDP_BIF_STATUS0_MMU_PF_N_RW_LSBMASK		(0x00000001)
#define PDP_BIF_STATUS0_MMU_PF_N_RW_SHIFT		(0)
#define PDP_BIF_STATUS0_MMU_PF_N_RW_LENGTH		(1)
#define PDP_BIF_STATUS0_MMU_PF_N_RW_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATUS0, MMU_FAULT_ADDR
*/
#define PDP_BIF_STATUS0_MMU_FAULT_ADDR_MASK		(0xFFFFF000)
#define PDP_BIF_STATUS0_MMU_FAULT_ADDR_LSBMASK		(0x000FFFFF)
#define PDP_BIF_STATUS0_MMU_FAULT_ADDR_SHIFT		(12)
#define PDP_BIF_STATUS0_MMU_FAULT_ADDR_LENGTH		(20)
#define PDP_BIF_STATUS0_MMU_FAULT_ADDR_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_STATUS1_OFFSET		(0x008C)

/* PDP_BIF, STATUS1, MMU_FAULT_REQ_STAT
*/
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_STAT_MASK		(0x0000FFFF)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_STAT_LSBMASK		(0x0000FFFF)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_STAT_SHIFT		(0)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_STAT_LENGTH		(16)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_STAT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATUS1, MMU_FAULT_REQ_ID
*/
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_ID_MASK		(0x000F0000)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_ID_LSBMASK		(0x0000000F)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_ID_SHIFT		(16)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_ID_LENGTH		(4)
#define PDP_BIF_STATUS1_MMU_FAULT_REQ_ID_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATUS1, MMU_FAULT_INDEX
*/
#define PDP_BIF_STATUS1_MMU_FAULT_INDEX_MASK		(0x03000000)
#define PDP_BIF_STATUS1_MMU_FAULT_INDEX_LSBMASK		(0x00000003)
#define PDP_BIF_STATUS1_MMU_FAULT_INDEX_SHIFT		(24)
#define PDP_BIF_STATUS1_MMU_FAULT_INDEX_LENGTH		(2)
#define PDP_BIF_STATUS1_MMU_FAULT_INDEX_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATUS1, MMU_FAULT_RNW
*/
#define PDP_BIF_STATUS1_MMU_FAULT_RNW_MASK		(0x10000000)
#define PDP_BIF_STATUS1_MMU_FAULT_RNW_LSBMASK		(0x00000001)
#define PDP_BIF_STATUS1_MMU_FAULT_RNW_SHIFT		(28)
#define PDP_BIF_STATUS1_MMU_FAULT_RNW_LENGTH		(1)
#define PDP_BIF_STATUS1_MMU_FAULT_RNW_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_MEM_REQ_OFFSET		(0x0090)

/* PDP_BIF, MEM_REQ, TAG_OUTSTANDING
*/
#define PDP_BIF_MEM_REQ_TAG_OUTSTANDING_MASK		(0x000003FF)
#define PDP_BIF_MEM_REQ_TAG_OUTSTANDING_LSBMASK		(0x000003FF)
#define PDP_BIF_MEM_REQ_TAG_OUTSTANDING_SHIFT		(0)
#define PDP_BIF_MEM_REQ_TAG_OUTSTANDING_LENGTH		(10)
#define PDP_BIF_MEM_REQ_TAG_OUTSTANDING_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, MEM_REQ, EXT_WRRESP_FAULT
*/
#define PDP_BIF_MEM_REQ_EXT_WRRESP_FAULT_MASK		(0x00001000)
#define PDP_BIF_MEM_REQ_EXT_WRRESP_FAULT_LSBMASK		(0x00000001)
#define PDP_BIF_MEM_REQ_EXT_WRRESP_FAULT_SHIFT		(12)
#define PDP_BIF_MEM_REQ_EXT_WRRESP_FAULT_LENGTH		(1)
#define PDP_BIF_MEM_REQ_EXT_WRRESP_FAULT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, MEM_REQ, EXT_RDRESP_FAULT
*/
#define PDP_BIF_MEM_REQ_EXT_RDRESP_FAULT_MASK		(0x00002000)
#define PDP_BIF_MEM_REQ_EXT_RDRESP_FAULT_LSBMASK		(0x00000001)
#define PDP_BIF_MEM_REQ_EXT_RDRESP_FAULT_SHIFT		(13)
#define PDP_BIF_MEM_REQ_EXT_RDRESP_FAULT_LENGTH		(1)
#define PDP_BIF_MEM_REQ_EXT_RDRESP_FAULT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, MEM_REQ, EXT_READ_BURST_FAULT
*/
#define PDP_BIF_MEM_REQ_EXT_READ_BURST_FAULT_MASK		(0x00004000)
#define PDP_BIF_MEM_REQ_EXT_READ_BURST_FAULT_LSBMASK		(0x00000001)
#define PDP_BIF_MEM_REQ_EXT_READ_BURST_FAULT_SHIFT		(14)
#define PDP_BIF_MEM_REQ_EXT_READ_BURST_FAULT_LENGTH		(1)
#define PDP_BIF_MEM_REQ_EXT_READ_BURST_FAULT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, MEM_REQ, INT_PROTOCOL_FAULT
*/
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_MASK		(0x80000000)
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_LSBMASK		(0x00000001)
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_SHIFT		(31)
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_LENGTH		(1)
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_SIGNED_FIELD	IMG_FALSE
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_NO_REPS		(16)
#define PDP_BIF_MEM_REQ_INT_PROTOCOL_FAULT_SIZE		(1)

#define PDP_BIF_MEM_EXT_OUTSTANDING_OFFSET		(0x0094)

/* PDP_BIF, MEM_EXT_OUTSTANDING, READ_WORDS_OUTSTANDING
*/
#define PDP_BIF_MEM_EXT_OUTSTANDING_READ_WORDS_OUTSTANDING_MASK		(0x0000FFFF)
#define PDP_BIF_MEM_EXT_OUTSTANDING_READ_WORDS_OUTSTANDING_LSBMASK		(0x0000FFFF)
#define PDP_BIF_MEM_EXT_OUTSTANDING_READ_WORDS_OUTSTANDING_SHIFT		(0)
#define PDP_BIF_MEM_EXT_OUTSTANDING_READ_WORDS_OUTSTANDING_LENGTH		(16)
#define PDP_BIF_MEM_EXT_OUTSTANDING_READ_WORDS_OUTSTANDING_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_FAULT_SELECT_OFFSET		(0x00A0)

/* PDP_BIF, FAULT_SELECT, MMU_FAULT_SELECT
*/
#define PDP_BIF_FAULT_SELECT_MMU_FAULT_SELECT_MASK		(0x0000000F)
#define PDP_BIF_FAULT_SELECT_MMU_FAULT_SELECT_LSBMASK		(0x0000000F)
#define PDP_BIF_FAULT_SELECT_MMU_FAULT_SELECT_SHIFT		(0)
#define PDP_BIF_FAULT_SELECT_MMU_FAULT_SELECT_LENGTH		(4)
#define PDP_BIF_FAULT_SELECT_MMU_FAULT_SELECT_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_PROTOCOL_FAULT_OFFSET		(0x00A8)

/* PDP_BIF, PROTOCOL_FAULT, FAULT_PAGE_BREAK
*/
#define PDP_BIF_PROTOCOL_FAULT_FAULT_PAGE_BREAK_MASK		(0x00000001)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_PAGE_BREAK_LSBMASK		(0x00000001)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_PAGE_BREAK_SHIFT		(0)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_PAGE_BREAK_LENGTH		(1)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_PAGE_BREAK_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, PROTOCOL_FAULT, FAULT_WRITE
*/
#define PDP_BIF_PROTOCOL_FAULT_FAULT_WRITE_MASK		(0x00000010)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_WRITE_LSBMASK		(0x00000001)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_WRITE_SHIFT		(4)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_WRITE_LENGTH		(1)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_WRITE_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, PROTOCOL_FAULT, FAULT_READ
*/
#define PDP_BIF_PROTOCOL_FAULT_FAULT_READ_MASK		(0x00000020)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_READ_LSBMASK		(0x00000001)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_READ_SHIFT		(5)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_READ_LENGTH		(1)
#define PDP_BIF_PROTOCOL_FAULT_FAULT_READ_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TOTAL_READ_REQ_OFFSET		(0x0100)

/* PDP_BIF, TOTAL_READ_REQ, TOTAL_READ_REQ
*/
#define PDP_BIF_TOTAL_READ_REQ_TOTAL_READ_REQ_MASK		(0xFFFFFFFF)
#define PDP_BIF_TOTAL_READ_REQ_TOTAL_READ_REQ_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_TOTAL_READ_REQ_TOTAL_READ_REQ_SHIFT		(0)
#define PDP_BIF_TOTAL_READ_REQ_TOTAL_READ_REQ_LENGTH		(32)
#define PDP_BIF_TOTAL_READ_REQ_TOTAL_READ_REQ_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TOTAL_WRITE_REQ_OFFSET		(0x0104)

/* PDP_BIF, TOTAL_WRITE_REQ, TOTAL_WRITE_REQ
*/
#define PDP_BIF_TOTAL_WRITE_REQ_TOTAL_WRITE_REQ_MASK		(0xFFFFFFFF)
#define PDP_BIF_TOTAL_WRITE_REQ_TOTAL_WRITE_REQ_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_TOTAL_WRITE_REQ_TOTAL_WRITE_REQ_SHIFT		(0)
#define PDP_BIF_TOTAL_WRITE_REQ_TOTAL_WRITE_REQ_LENGTH		(32)
#define PDP_BIF_TOTAL_WRITE_REQ_TOTAL_WRITE_REQ_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_READS_LESS_64_REQ_OFFSET		(0x0108)

/* PDP_BIF, READS_LESS_64_REQ, READS_LESS_64_REQ
*/
#define PDP_BIF_READS_LESS_64_REQ_READS_LESS_64_REQ_MASK		(0xFFFFFFFF)
#define PDP_BIF_READS_LESS_64_REQ_READS_LESS_64_REQ_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_READS_LESS_64_REQ_READS_LESS_64_REQ_SHIFT		(0)
#define PDP_BIF_READS_LESS_64_REQ_READS_LESS_64_REQ_LENGTH		(32)
#define PDP_BIF_READS_LESS_64_REQ_READS_LESS_64_REQ_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_WRITES_LESS_64_REQ_OFFSET		(0x010C)

/* PDP_BIF, WRITES_LESS_64_REQ, WRITES_LESS_64_REQ
*/
#define PDP_BIF_WRITES_LESS_64_REQ_WRITES_LESS_64_REQ_MASK		(0xFFFFFFFF)
#define PDP_BIF_WRITES_LESS_64_REQ_WRITES_LESS_64_REQ_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_WRITES_LESS_64_REQ_WRITES_LESS_64_REQ_SHIFT		(0)
#define PDP_BIF_WRITES_LESS_64_REQ_WRITES_LESS_64_REQ_LENGTH		(32)
#define PDP_BIF_WRITES_LESS_64_REQ_WRITES_LESS_64_REQ_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_EXT_CMD_STALL_OFFSET		(0x0120)

/* PDP_BIF, EXT_CMD_STALL, EXT_CMD_STALL
*/
#define PDP_BIF_EXT_CMD_STALL_EXT_CMD_STALL_MASK		(0xFFFFFFFF)
#define PDP_BIF_EXT_CMD_STALL_EXT_CMD_STALL_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_EXT_CMD_STALL_EXT_CMD_STALL_SHIFT		(0)
#define PDP_BIF_EXT_CMD_STALL_EXT_CMD_STALL_LENGTH		(32)
#define PDP_BIF_EXT_CMD_STALL_EXT_CMD_STALL_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_WRITE_REQ_STALL_OFFSET		(0x0124)

/* PDP_BIF, WRITE_REQ_STALL, WRITE_REQ_STALL
*/
#define PDP_BIF_WRITE_REQ_STALL_WRITE_REQ_STALL_MASK		(0xFFFFFFFF)
#define PDP_BIF_WRITE_REQ_STALL_WRITE_REQ_STALL_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_WRITE_REQ_STALL_WRITE_REQ_STALL_SHIFT		(0)
#define PDP_BIF_WRITE_REQ_STALL_WRITE_REQ_STALL_LENGTH		(32)
#define PDP_BIF_WRITE_REQ_STALL_WRITE_REQ_STALL_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_MISS_STALL_OFFSET		(0x0128)

/* PDP_BIF, MISS_STALL, MMU_MISS_STALL
*/
#define PDP_BIF_MISS_STALL_MMU_MISS_STALL_MASK		(0xFFFFFFFF)
#define PDP_BIF_MISS_STALL_MMU_MISS_STALL_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_MISS_STALL_MMU_MISS_STALL_SHIFT		(0)
#define PDP_BIF_MISS_STALL_MMU_MISS_STALL_LENGTH		(32)
#define PDP_BIF_MISS_STALL_MMU_MISS_STALL_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_ADDRESS_STALL_OFFSET		(0x012C)

/* PDP_BIF, ADDRESS_STALL, ADDRESS_STALL
*/
#define PDP_BIF_ADDRESS_STALL_ADDRESS_STALL_MASK		(0xFFFFFFFF)
#define PDP_BIF_ADDRESS_STALL_ADDRESS_STALL_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_ADDRESS_STALL_ADDRESS_STALL_SHIFT		(0)
#define PDP_BIF_ADDRESS_STALL_ADDRESS_STALL_LENGTH		(32)
#define PDP_BIF_ADDRESS_STALL_ADDRESS_STALL_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_TAG_STALL_OFFSET		(0x0130)

/* PDP_BIF, TAG_STALL, TAG_STALL
*/
#define PDP_BIF_TAG_STALL_TAG_STALL_MASK		(0xFFFFFFFF)
#define PDP_BIF_TAG_STALL_TAG_STALL_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_TAG_STALL_TAG_STALL_SHIFT		(0)
#define PDP_BIF_TAG_STALL_TAG_STALL_LENGTH		(32)
#define PDP_BIF_TAG_STALL_TAG_STALL_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_PEAK_READ_OUTSTANDING_OFFSET		(0x0140)

/* PDP_BIF, PEAK_READ_OUTSTANDING, PEAK_TAG_OUTSTANDING
*/
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_TAG_OUTSTANDING_MASK		(0x000003FF)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_TAG_OUTSTANDING_LSBMASK		(0x000003FF)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_TAG_OUTSTANDING_SHIFT		(0)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_TAG_OUTSTANDING_LENGTH		(10)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_TAG_OUTSTANDING_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, PEAK_READ_OUTSTANDING, PEAK_READ_LATENCY
*/
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_READ_LATENCY_MASK		(0xFFFF0000)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_READ_LATENCY_LSBMASK		(0x0000FFFF)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_READ_LATENCY_SHIFT		(16)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_READ_LATENCY_LENGTH		(16)
#define PDP_BIF_PEAK_READ_OUTSTANDING_PEAK_READ_LATENCY_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_AVERAGE_READ_LATENCY_OFFSET		(0x0144)

/* PDP_BIF, AVERAGE_READ_LATENCY, AVERAGE_READ_LATENCY
*/
#define PDP_BIF_AVERAGE_READ_LATENCY_AVERAGE_READ_LATENCY_MASK		(0xFFFFFFFF)
#define PDP_BIF_AVERAGE_READ_LATENCY_AVERAGE_READ_LATENCY_LSBMASK		(0xFFFFFFFF)
#define PDP_BIF_AVERAGE_READ_LATENCY_AVERAGE_READ_LATENCY_SHIFT		(0)
#define PDP_BIF_AVERAGE_READ_LATENCY_AVERAGE_READ_LATENCY_LENGTH		(32)
#define PDP_BIF_AVERAGE_READ_LATENCY_AVERAGE_READ_LATENCY_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_STATISTICS_CONTROL_OFFSET		(0x0160)

/* PDP_BIF, STATISTICS_CONTROL, BANDWIDTH_STATS_INIT
*/
#define PDP_BIF_STATISTICS_CONTROL_BANDWIDTH_STATS_INIT_MASK		(0x00000001)
#define PDP_BIF_STATISTICS_CONTROL_BANDWIDTH_STATS_INIT_LSBMASK		(0x00000001)
#define PDP_BIF_STATISTICS_CONTROL_BANDWIDTH_STATS_INIT_SHIFT		(0)
#define PDP_BIF_STATISTICS_CONTROL_BANDWIDTH_STATS_INIT_LENGTH		(1)
#define PDP_BIF_STATISTICS_CONTROL_BANDWIDTH_STATS_INIT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATISTICS_CONTROL, STALL_STATS_INIT
*/
#define PDP_BIF_STATISTICS_CONTROL_STALL_STATS_INIT_MASK		(0x00000002)
#define PDP_BIF_STATISTICS_CONTROL_STALL_STATS_INIT_LSBMASK		(0x00000001)
#define PDP_BIF_STATISTICS_CONTROL_STALL_STATS_INIT_SHIFT		(1)
#define PDP_BIF_STATISTICS_CONTROL_STALL_STATS_INIT_LENGTH		(1)
#define PDP_BIF_STATISTICS_CONTROL_STALL_STATS_INIT_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, STATISTICS_CONTROL, LATENCY_STATS_INIT
*/
#define PDP_BIF_STATISTICS_CONTROL_LATENCY_STATS_INIT_MASK		(0x00000004)
#define PDP_BIF_STATISTICS_CONTROL_LATENCY_STATS_INIT_LSBMASK		(0x00000001)
#define PDP_BIF_STATISTICS_CONTROL_LATENCY_STATS_INIT_SHIFT		(2)
#define PDP_BIF_STATISTICS_CONTROL_LATENCY_STATS_INIT_LENGTH		(1)
#define PDP_BIF_STATISTICS_CONTROL_LATENCY_STATS_INIT_SIGNED_FIELD	IMG_FALSE

#define PDP_BIF_VERSION_OFFSET		(0x01D0)

/* PDP_BIF, VERSION, MMU_MAJOR_REV
*/
#define PDP_BIF_VERSION_MMU_MAJOR_REV_MASK		(0x00FF0000)
#define PDP_BIF_VERSION_MMU_MAJOR_REV_LSBMASK		(0x000000FF)
#define PDP_BIF_VERSION_MMU_MAJOR_REV_SHIFT		(16)
#define PDP_BIF_VERSION_MMU_MAJOR_REV_LENGTH		(8)
#define PDP_BIF_VERSION_MMU_MAJOR_REV_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, VERSION, MMU_MINOR_REV
*/
#define PDP_BIF_VERSION_MMU_MINOR_REV_MASK		(0x0000FF00)
#define PDP_BIF_VERSION_MMU_MINOR_REV_LSBMASK		(0x000000FF)
#define PDP_BIF_VERSION_MMU_MINOR_REV_SHIFT		(8)
#define PDP_BIF_VERSION_MMU_MINOR_REV_LENGTH		(8)
#define PDP_BIF_VERSION_MMU_MINOR_REV_SIGNED_FIELD	IMG_FALSE

/* PDP_BIF, VERSION, MMU_MAINT_REV
*/
#define PDP_BIF_VERSION_MMU_MAINT_REV_MASK		(0x000000FF)
#define PDP_BIF_VERSION_MMU_MAINT_REV_LSBMASK		(0x000000FF)
#define PDP_BIF_VERSION_MMU_MAINT_REV_SHIFT		(0)
#define PDP_BIF_VERSION_MMU_MAINT_REV_LENGTH		(8)
#define PDP_BIF_VERSION_MMU_MAINT_REV_SIGNED_FIELD	IMG_FALSE

#endif /* _PDP2_MMU_REGS_H */