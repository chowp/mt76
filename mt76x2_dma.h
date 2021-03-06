/*
 * Copyright (C) 2016 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MT76x2_DMA_H
#define __MT76x2_DMA_H

#include "dma.h"

#define MT_TXD_INFO_LEN			GENMASK(13, 0)
#define MT_TXD_INFO_NEXT_VLD		BIT(16)
#define MT_TXD_INFO_TX_BURST		BIT(17)
#define MT_TXD_INFO_80211		BIT(19)
#define MT_TXD_INFO_TSO			BIT(20)
#define MT_TXD_INFO_CSO			BIT(21)
#define MT_TXD_INFO_WIV			BIT(24)
#define MT_TXD_INFO_QSEL		GENMASK(26, 25)
#define MT_TXD_INFO_TCO			BIT(29)
#define MT_TXD_INFO_UCO			BIT(30)
#define MT_TXD_INFO_ICO			BIT(31)

#define MT_RX_FCE_INFO_LEN		GENMASK(13, 0)
#define MT_RX_FCE_INFO_SELF_GEN		BIT(15)
#define MT_RX_FCE_INFO_CMD_SEQ		GENMASK(19, 16)
#define MT_RX_FCE_INFO_EVT_TYPE		GENMASK(23, 20)
#define MT_RX_FCE_INFO_PCIE_INTR	BIT(24)
#define MT_RX_FCE_INFO_QSEL		GENMASK(26, 25)
#define MT_RX_FCE_INFO_D_PORT		GENMASK(29, 27)
#define MT_RX_FCE_INFO_TYPE		GENMASK(31, 30)

/* MCU request message header  */
#define MT_MCU_MSG_LEN			GENMASK(15, 0)
#define MT_MCU_MSG_CMD_SEQ		GENMASK(19, 16)
#define MT_MCU_MSG_CMD_TYPE		GENMASK(26, 20)
#define MT_MCU_MSG_PORT			GENMASK(29, 27)
#define MT_MCU_MSG_TYPE			GENMASK(31, 30)
#define MT_MCU_MSG_TYPE_CMD		BIT(30)

enum mt76x2_qsel {
	MT_QSEL_MGMT,
	MT_QSEL_HCCA,
	MT_QSEL_EDCA,
	MT_QSEL_EDCA_2,
};

enum dma_msg_port {
	WLAN_PORT,
	CPU_RX_PORT,
	CPU_TX_PORT,
	HOST_PORT,
	VIRTUAL_CPU_RX_PORT,
	VIRTUAL_CPU_TX_PORT,
	DISCARD,
};

#endif
