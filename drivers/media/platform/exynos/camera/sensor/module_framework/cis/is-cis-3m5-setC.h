/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_3M5_SET_C_H
#define IS_CIS_3M5_SET_C_H

#include "is-cis.h"
#include "is-cis-3m5.h"

const u32 sensor_3m5_setfile_C_Global[] = {
	0x6028, 0x4000, 0x2,
	0x0000, 0x0006, 0x2,
	0x0000, 0x30D5, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	I2C_MODE_DELAY, 5000, 0x0,
	0x0A02, 0x7800, 0x2,

	0x6028, 0x2000, 0x2,
	0x602A, 0x3EAC, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0549, 0x2,
	I2C_MODE_BURST_DATA, 0x0448, 0x2,
	I2C_MODE_BURST_DATA, 0x054A, 0x2,
	I2C_MODE_BURST_DATA, 0xC1F8, 0x2,
	I2C_MODE_BURST_DATA, 0xC804, 0x2,
	I2C_MODE_BURST_DATA, 0x101A, 0x2,
	I2C_MODE_BURST_DATA, 0xA1F8, 0x2,
	I2C_MODE_BURST_DATA, 0xCC04, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x70BA, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x4594, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x2E50, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x7000, 0x2,
	I2C_MODE_BURST_DATA, 0x10B5, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xB7FA, 0x2,
	I2C_MODE_BURST_DATA, 0xFF49, 0x2,
	I2C_MODE_BURST_DATA, 0x0120, 0x2,
	I2C_MODE_BURST_DATA, 0x0880, 0x2,
	I2C_MODE_BURST_DATA, 0x10BD, 0x2,
	I2C_MODE_BURST_DATA, 0x2DE9, 0x2,
	I2C_MODE_BURST_DATA, 0xF041, 0x2,
	I2C_MODE_BURST_DATA, 0xFD4C, 0x2,
	I2C_MODE_BURST_DATA, 0xFB4F, 0x2,
	I2C_MODE_BURST_DATA, 0x0026, 0x2,
	I2C_MODE_BURST_DATA, 0xB4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6A52, 0x2,
	I2C_MODE_BURST_DATA, 0x3888, 0x2,
	I2C_MODE_BURST_DATA, 0x08B1, 0x2,
	I2C_MODE_BURST_DATA, 0xA4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6A62, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xABFA, 0x2,
	I2C_MODE_BURST_DATA, 0x3E80, 0x2,
	I2C_MODE_BURST_DATA, 0xA4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6A52, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0xF081, 0x2,
	I2C_MODE_BURST_DATA, 0x2DE9, 0x2,
	I2C_MODE_BURST_DATA, 0xF041, 0x2,
	I2C_MODE_BURST_DATA, 0x0746, 0x2,
	I2C_MODE_BURST_DATA, 0xF248, 0x2,
	I2C_MODE_BURST_DATA, 0x0E46, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0x4068, 0x2,
	I2C_MODE_BURST_DATA, 0x84B2, 0x2,
	I2C_MODE_BURST_DATA, 0x050C, 0x2,
	I2C_MODE_BURST_DATA, 0x2146, 0x2,
	I2C_MODE_BURST_DATA, 0x2846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x9EFA, 0x2,
	I2C_MODE_BURST_DATA, 0x3146, 0x2,
	I2C_MODE_BURST_DATA, 0x3846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x9FFA, 0x2,
	I2C_MODE_BURST_DATA, 0xED4F, 0x2,
	I2C_MODE_BURST_DATA, 0x4DF2, 0x2,
	I2C_MODE_BURST_DATA, 0x0C26, 0x2,
	I2C_MODE_BURST_DATA, 0x4FF4, 0x2,
	I2C_MODE_BURST_DATA, 0x8061, 0x2,
	I2C_MODE_BURST_DATA, 0x3A78, 0x2,
	I2C_MODE_BURST_DATA, 0x3046, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x91FA, 0x2,
	I2C_MODE_BURST_DATA, 0x7878, 0x2,
	I2C_MODE_BURST_DATA, 0xB8B3, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0x8021, 0x2,
	I2C_MODE_BURST_DATA, 0x3046, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x8AFA, 0x2,
	I2C_MODE_BURST_DATA, 0xE648, 0x2,
	I2C_MODE_BURST_DATA, 0x0088, 0x2,
	I2C_MODE_BURST_DATA, 0xE64B, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5C02, 0x2,
	I2C_MODE_BURST_DATA, 0xE448, 0x2,
	I2C_MODE_BURST_DATA, 0x001D, 0x2,
	I2C_MODE_BURST_DATA, 0x0088, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5E02, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5C02, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5E12, 0x2,
	I2C_MODE_BURST_DATA, 0x4218, 0x2,
	I2C_MODE_BURST_DATA, 0x02D0, 0x2,
	I2C_MODE_BURST_DATA, 0x8002, 0x2,
	I2C_MODE_BURST_DATA, 0xB0FB, 0x2,
	I2C_MODE_BURST_DATA, 0xF2F2, 0x2,
	I2C_MODE_BURST_DATA, 0x91B2, 0x2,
	I2C_MODE_BURST_DATA, 0xDE4A, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6012, 0x2,
	I2C_MODE_BURST_DATA, 0xB2F8, 0x2,
	I2C_MODE_BURST_DATA, 0x1602, 0x2,
	I2C_MODE_BURST_DATA, 0xB2F8, 0x2,
	I2C_MODE_BURST_DATA, 0x1422, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9805, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9A25, 0x2,
	I2C_MODE_BURST_DATA, 0x8018, 0x2,
	I2C_MODE_BURST_DATA, 0x04D0, 0x2,
	I2C_MODE_BURST_DATA, 0x9202, 0x2,
	I2C_MODE_BURST_DATA, 0xB2FB, 0x2,
	I2C_MODE_BURST_DATA, 0xF0F0, 0x2,
	I2C_MODE_BURST_DATA, 0xA3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9C05, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9C05, 0x2,
	I2C_MODE_BURST_DATA, 0x0A18, 0x2,
	I2C_MODE_BURST_DATA, 0x01FB, 0x2,
	I2C_MODE_BURST_DATA, 0x1020, 0x2,
	I2C_MODE_BURST_DATA, 0x40F3, 0x2,
	I2C_MODE_BURST_DATA, 0x9510, 0x2,
	I2C_MODE_BURST_DATA, 0x1028, 0x2,
	I2C_MODE_BURST_DATA, 0x06DC, 0x2,
	I2C_MODE_BURST_DATA, 0x0028, 0x2,
	I2C_MODE_BURST_DATA, 0x05DA, 0x2,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	I2C_MODE_BURST_DATA, 0x03E0, 0x2,
	I2C_MODE_BURST_DATA, 0xFFE7, 0x2,
	I2C_MODE_BURST_DATA, 0x0122, 0x2,
	I2C_MODE_BURST_DATA, 0xC5E7, 0x2,
	I2C_MODE_BURST_DATA, 0x1020, 0x2,
	I2C_MODE_BURST_DATA, 0xCE49, 0x2,
	I2C_MODE_BURST_DATA, 0x0880, 0x2,
	I2C_MODE_BURST_DATA, 0x2146, 0x2,
	I2C_MODE_BURST_DATA, 0x2846, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0xF041, 0x2,
	I2C_MODE_BURST_DATA, 0x0122, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x4ABA, 0x2,
	I2C_MODE_BURST_DATA, 0xF0B5, 0x2,
	I2C_MODE_BURST_DATA, 0xCA4C, 0x2,
	I2C_MODE_BURST_DATA, 0xDDE9, 0x2,
	I2C_MODE_BURST_DATA, 0x0565, 0x2,
	I2C_MODE_BURST_DATA, 0x08B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2788, 0x2,
	I2C_MODE_BURST_DATA, 0x0760, 0x2,
	I2C_MODE_BURST_DATA, 0x09B1, 0x2,
	I2C_MODE_BURST_DATA, 0x6088, 0x2,
	I2C_MODE_BURST_DATA, 0x0860, 0x2,
	I2C_MODE_BURST_DATA, 0x12B1, 0x2,
	I2C_MODE_BURST_DATA, 0xA088, 0x2,
	I2C_MODE_BURST_DATA, 0x401C, 0x2,
	I2C_MODE_BURST_DATA, 0x1060, 0x2,
	I2C_MODE_BURST_DATA, 0x0BB1, 0x2,
	I2C_MODE_BURST_DATA, 0xE088, 0x2,
	I2C_MODE_BURST_DATA, 0x1860, 0x2,
	I2C_MODE_BURST_DATA, 0x0EB1, 0x2,
	I2C_MODE_BURST_DATA, 0xA07B, 0x2,
	I2C_MODE_BURST_DATA, 0x3060, 0x2,
	I2C_MODE_BURST_DATA, 0x002D, 0x2,
	I2C_MODE_BURST_DATA, 0x01D0, 0x2,
	I2C_MODE_BURST_DATA, 0xE07B, 0x2,
	I2C_MODE_BURST_DATA, 0x2860, 0x2,
	I2C_MODE_BURST_DATA, 0xF0BD, 0x2,
	I2C_MODE_BURST_DATA, 0x70B5, 0x2,
	I2C_MODE_BURST_DATA, 0x0646, 0x2,
	I2C_MODE_BURST_DATA, 0xB648, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0x8068, 0x2,
	I2C_MODE_BURST_DATA, 0x84B2, 0x2,
	I2C_MODE_BURST_DATA, 0x050C, 0x2,
	I2C_MODE_BURST_DATA, 0x2146, 0x2,
	I2C_MODE_BURST_DATA, 0x2846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x26FA, 0x2,
	I2C_MODE_BURST_DATA, 0x3046, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x2DFA, 0x2,
	I2C_MODE_BURST_DATA, 0xB848, 0x2,
	I2C_MODE_BURST_DATA, 0x0368, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7401, 0x2,
	I2C_MODE_BURST_DATA, 0x010A, 0x2,
	I2C_MODE_BURST_DATA, 0xB648, 0x2,
	I2C_MODE_BURST_DATA, 0x4268, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5010, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7511, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5210, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7811, 0x2,
	I2C_MODE_BURST_DATA, 0x090A, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5810, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7911, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5A10, 0x2,
	I2C_MODE_BURST_DATA, 0x33F8, 0x2,
	I2C_MODE_BURST_DATA, 0xF01F, 0x2,
	I2C_MODE_BURST_DATA, 0x0068, 0x2,
	I2C_MODE_BURST_DATA, 0x090A, 0x2,
	I2C_MODE_BURST_DATA, 0x00F8, 0x2,
	I2C_MODE_BURST_DATA, 0xCE1F, 0x2,
	I2C_MODE_BURST_DATA, 0x5978, 0x2,
	I2C_MODE_BURST_DATA, 0x8170, 0x2,
	I2C_MODE_BURST_DATA, 0x5988, 0x2,
	I2C_MODE_BURST_DATA, 0x090A, 0x2,
	I2C_MODE_BURST_DATA, 0x0171, 0x2,
	I2C_MODE_BURST_DATA, 0xD978, 0x2,
	I2C_MODE_BURST_DATA, 0x8171, 0x2,
	I2C_MODE_BURST_DATA, 0x988C, 0x2,
	I2C_MODE_BURST_DATA, 0x000A, 0x2,
	I2C_MODE_BURST_DATA, 0x9074, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x2500, 0x2,
	I2C_MODE_BURST_DATA, 0x1075, 0x2,
	I2C_MODE_BURST_DATA, 0xD88C, 0x2,
	I2C_MODE_BURST_DATA, 0x000A, 0x2,
	I2C_MODE_BURST_DATA, 0x9075, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x2700, 0x2,
	I2C_MODE_BURST_DATA, 0x1076, 0x2,
	I2C_MODE_BURST_DATA, 0xB3F8, 0x2,
	I2C_MODE_BURST_DATA, 0xB000, 0x2,
	I2C_MODE_BURST_DATA, 0x000A, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7E00, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0xB100, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8000, 0x2,
	I2C_MODE_BURST_DATA, 0x9548, 0x2,
	I2C_MODE_BURST_DATA, 0x90F8, 0x2,
	I2C_MODE_BURST_DATA, 0xB313, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8210, 0x2,
	I2C_MODE_BURST_DATA, 0x90F8, 0x2,
	I2C_MODE_BURST_DATA, 0xB103, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8400, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0xB400, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8600, 0x2,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8800, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6211, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9610, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0112, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9E10, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0212, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xA010, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xA200, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xA400, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0512, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xA610, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0612, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xA810, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0712, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xAA10, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xAC00, 0x2,
	I2C_MODE_BURST_DATA, 0x5A20, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xAD00, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0902, 0x2,
	I2C_MODE_BURST_DATA, 0x82F8, 0x2,
	I2C_MODE_BURST_DATA, 0xAE00, 0x2,
	I2C_MODE_BURST_DATA, 0x2146, 0x2,
	I2C_MODE_BURST_DATA, 0x2846, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x7040, 0x2,
	I2C_MODE_BURST_DATA, 0x0122, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xAFB9, 0x2,
	I2C_MODE_BURST_DATA, 0x70B5, 0x2,
	I2C_MODE_BURST_DATA, 0x7548, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0x0169, 0x2,
	I2C_MODE_BURST_DATA, 0x0C0C, 0x2,
	I2C_MODE_BURST_DATA, 0x8DB2, 0x2,
	I2C_MODE_BURST_DATA, 0x2946, 0x2,
	I2C_MODE_BURST_DATA, 0x2046, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xA5F9, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xB2F9, 0x2,
	I2C_MODE_BURST_DATA, 0x7248, 0x2,
	I2C_MODE_BURST_DATA, 0x8078, 0x2,
	I2C_MODE_BURST_DATA, 0x08B1, 0x2,
	I2C_MODE_BURST_DATA, 0x4F22, 0x2,
	I2C_MODE_BURST_DATA, 0x00E0, 0x2,
	I2C_MODE_BURST_DATA, 0x2522, 0x2,
	I2C_MODE_BURST_DATA, 0x7748, 0x2,
	I2C_MODE_BURST_DATA, 0x90F8, 0x2,
	I2C_MODE_BURST_DATA, 0xE400, 0x2,
	I2C_MODE_BURST_DATA, 0x0328, 0x2,
	I2C_MODE_BURST_DATA, 0x07D1, 0x2,
	I2C_MODE_BURST_DATA, 0x42F0, 0x2,
	I2C_MODE_BURST_DATA, 0x8002, 0x2,
	I2C_MODE_BURST_DATA, 0x4FF4, 0x2,
	I2C_MODE_BURST_DATA, 0x8361, 0x2,
	I2C_MODE_BURST_DATA, 0x48F6, 0x2,
	I2C_MODE_BURST_DATA, 0x7A20, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xA4F9, 0x2,
	I2C_MODE_BURST_DATA, 0x2946, 0x2,
	I2C_MODE_BURST_DATA, 0x2046, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x7040, 0x2,
	I2C_MODE_BURST_DATA, 0x0122, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x89B9, 0x2,
	I2C_MODE_BURST_DATA, 0x10B5, 0x2,
	I2C_MODE_BURST_DATA, 0x0221, 0x2,
	I2C_MODE_BURST_DATA, 0x7620, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x9DF9, 0x2,
	I2C_MODE_BURST_DATA, 0x0221, 0x2,
	I2C_MODE_BURST_DATA, 0x4420, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x99F9, 0x2,
	I2C_MODE_BURST_DATA, 0x4021, 0x2,
	I2C_MODE_BURST_DATA, 0x4520, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x95F9, 0x2,
	I2C_MODE_BURST_DATA, 0x5D49, 0x2,
	I2C_MODE_BURST_DATA, 0x0420, 0x2,
	I2C_MODE_BURST_DATA, 0xA1F8, 0x2,
	I2C_MODE_BURST_DATA, 0x3A06, 0x2,
	I2C_MODE_BURST_DATA, 0x10BD, 0x2,
	I2C_MODE_BURST_DATA, 0x7047, 0x2,
	I2C_MODE_BURST_DATA, 0x7047, 0x2,
	I2C_MODE_BURST_DATA, 0x08B5, 0x2,
	I2C_MODE_BURST_DATA, 0x5949, 0x2,
	I2C_MODE_BURST_DATA, 0x3120, 0x2,
	I2C_MODE_BURST_DATA, 0x6A46, 0x2,
	I2C_MODE_BURST_DATA, 0x81F8, 0x2,
	I2C_MODE_BURST_DATA, 0x4306, 0x2,
	I2C_MODE_BURST_DATA, 0x5A20, 0x2,
	I2C_MODE_BURST_DATA, 0x8DF8, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0121, 0x2,
	I2C_MODE_BURST_DATA, 0x7520, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x86F9, 0x2,
	I2C_MODE_BURST_DATA, 0x9DF8, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x08BD, 0x2,
	I2C_MODE_BURST_DATA, 0x7047, 0x2,
	I2C_MODE_BURST_DATA, 0x5248, 0x2,
	I2C_MODE_BURST_DATA, 0x10B5, 0x2,
	I2C_MODE_BURST_DATA, 0x8078, 0x2,
	I2C_MODE_BURST_DATA, 0x18B1, 0x2,
	I2C_MODE_BURST_DATA, 0x0021, 0x2,
	I2C_MODE_BURST_DATA, 0x4420, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x75F9, 0x2,
	I2C_MODE_BURST_DATA, 0x4D49, 0x2,
	I2C_MODE_BURST_DATA, 0x0220, 0x2,
	I2C_MODE_BURST_DATA, 0xA1F8, 0x2,
	I2C_MODE_BURST_DATA, 0x3A06, 0x2,
	I2C_MODE_BURST_DATA, 0x10BD, 0x2,
	I2C_MODE_BURST_DATA, 0x5448, 0x2,
	I2C_MODE_BURST_DATA, 0x90F8, 0x2,
	I2C_MODE_BURST_DATA, 0xE400, 0x2,
	I2C_MODE_BURST_DATA, 0x0328, 0x2,
	I2C_MODE_BURST_DATA, 0x01D0, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x73B9, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x2B01, 0x2,
	I2C_MODE_BURST_DATA, 0x4648, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x4C16, 0x2,
	I2C_MODE_BURST_DATA, 0x4649, 0x2,
	I2C_MODE_BURST_DATA, 0x8978, 0x2,
	I2C_MODE_BURST_DATA, 0x11B1, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x8501, 0x2,
	I2C_MODE_BURST_DATA, 0x01E0, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x6501, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x4816, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x6B01, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x4416, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x7101, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5016, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x5901, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5416, 0x2,
	I2C_MODE_BURST_DATA, 0x7047, 0x2,
	I2C_MODE_BURST_DATA, 0x2DE9, 0x2,
	I2C_MODE_BURST_DATA, 0xF041, 0x2,
	I2C_MODE_BURST_DATA, 0x434C, 0x2,
	I2C_MODE_BURST_DATA, 0x4249, 0x2,
	I2C_MODE_BURST_DATA, 0x0646, 0x2,
	I2C_MODE_BURST_DATA, 0xB4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x6670, 0x2,
	I2C_MODE_BURST_DATA, 0xC989, 0x2,
	I2C_MODE_BURST_DATA, 0xB4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x7E20, 0x2,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	I2C_MODE_BURST_DATA, 0xC1B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2146, 0x2,
	I2C_MODE_BURST_DATA, 0xD1F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9010, 0x2,
	I2C_MODE_BURST_DATA, 0x72B1, 0x2,
	I2C_MODE_BURST_DATA, 0x8FB1, 0x2,
	I2C_MODE_BURST_DATA, 0x0846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x48F9, 0x2,
	I2C_MODE_BURST_DATA, 0x0546, 0x2,
	I2C_MODE_BURST_DATA, 0xA06F, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x44F9, 0x2,
	I2C_MODE_BURST_DATA, 0x8542, 0x2,
	I2C_MODE_BURST_DATA, 0x02D2, 0x2,
	I2C_MODE_BURST_DATA, 0xD4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x9000, 0x2,
	I2C_MODE_BURST_DATA, 0x26E0, 0x2,
	I2C_MODE_BURST_DATA, 0xA06F, 0x2,
	I2C_MODE_BURST_DATA, 0x24E0, 0x2,
	I2C_MODE_BURST_DATA, 0x002F, 0x2,
	I2C_MODE_BURST_DATA, 0xFBD1, 0x2,
	I2C_MODE_BURST_DATA, 0x002A, 0x2,
	I2C_MODE_BURST_DATA, 0x24D0, 0x2,
	I2C_MODE_BURST_DATA, 0x0846, 0x2,
	I2C_MODE_BURST_DATA, 0x1EE0, 0x2,
	I2C_MODE_BURST_DATA, 0x2849, 0x2,
	I2C_MODE_BURST_DATA, 0x8D88, 0x2,
	I2C_MODE_BURST_DATA, 0x8968, 0x2,
	I2C_MODE_BURST_DATA, 0x4B42, 0x2,
	I2C_MODE_BURST_DATA, 0x77B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2F48, 0x2,
	I2C_MODE_BURST_DATA, 0x406F, 0x2,
	I2C_MODE_BURST_DATA, 0x10E0, 0x2,
	I2C_MODE_BURST_DATA, 0x4242, 0x2,
	I2C_MODE_BURST_DATA, 0x00E0, 0x2,
	I2C_MODE_BURST_DATA, 0x0246, 0x2,
	I2C_MODE_BURST_DATA, 0x0029, 0x2,
	I2C_MODE_BURST_DATA, 0x0FDB, 0x2,
	I2C_MODE_BURST_DATA, 0x8A42, 0x2,
	I2C_MODE_BURST_DATA, 0x0FDD, 0x2,
	I2C_MODE_BURST_DATA, 0x3046, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0xF041, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x28B9, 0x2,
	I2C_MODE_BURST_DATA, 0x002A, 0x2,
	I2C_MODE_BURST_DATA, 0x0CD0, 0x2,
	I2C_MODE_BURST_DATA, 0x2748, 0x2,
	I2C_MODE_BURST_DATA, 0xD0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8800, 0x2,
	I2C_MODE_BURST_DATA, 0x25B1, 0x2,
	I2C_MODE_BURST_DATA, 0x0028, 0x2,
	I2C_MODE_BURST_DATA, 0xEDDA, 0x2,
	I2C_MODE_BURST_DATA, 0xEAE7, 0x2,
	I2C_MODE_BURST_DATA, 0x1946, 0x2,
	I2C_MODE_BURST_DATA, 0xEDE7, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x20F9, 0x2,
	I2C_MODE_BURST_DATA, 0xE060, 0x2,
	I2C_MODE_BURST_DATA, 0x0120, 0x2,
	I2C_MODE_BURST_DATA, 0x3DE6, 0x2,
	I2C_MODE_BURST_DATA, 0x2DE9, 0x2,
	I2C_MODE_BURST_DATA, 0xF047, 0x2,
	I2C_MODE_BURST_DATA, 0x8146, 0x2,
	I2C_MODE_BURST_DATA, 0x0F46, 0x2,
	I2C_MODE_BURST_DATA, 0x0846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x1BF9, 0x2,
	I2C_MODE_BURST_DATA, 0x1B4C, 0x2,
	I2C_MODE_BURST_DATA, 0x0026, 0x2,
	I2C_MODE_BURST_DATA, 0x608A, 0x2,
	I2C_MODE_BURST_DATA, 0x10B1, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x1AF9, 0x2,
	I2C_MODE_BURST_DATA, 0x6682, 0x2,
	I2C_MODE_BURST_DATA, 0x194D, 0x2,
	I2C_MODE_BURST_DATA, 0x2888, 0x2,
	I2C_MODE_BURST_DATA, 0x0128, 0x2,
	I2C_MODE_BURST_DATA, 0x60D1, 0x2,
	I2C_MODE_BURST_DATA, 0xA08B, 0x2,
	I2C_MODE_BURST_DATA, 0x0028, 0x2,
	I2C_MODE_BURST_DATA, 0x5DD1, 0x2,
	I2C_MODE_BURST_DATA, 0x002F, 0x2,
	I2C_MODE_BURST_DATA, 0x5BD1, 0x2,
	I2C_MODE_BURST_DATA, 0x104F, 0x2,
	I2C_MODE_BURST_DATA, 0x3868, 0x2,
	I2C_MODE_BURST_DATA, 0xB0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x1403, 0x2,
	I2C_MODE_BURST_DATA, 0x38B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2889, 0x2,
	I2C_MODE_BURST_DATA, 0x401C, 0x2,
	I2C_MODE_BURST_DATA, 0x80B2, 0x2,
	I2C_MODE_BURST_DATA, 0x2881, 0x2,
	I2C_MODE_BURST_DATA, 0xFF28, 0x2,
	I2C_MODE_BURST_DATA, 0x01D9, 0x2,
	I2C_MODE_BURST_DATA, 0xA08C, 0x2,
	I2C_MODE_BURST_DATA, 0x2881, 0x2,
	I2C_MODE_BURST_DATA, 0x0F48, 0x2,
	I2C_MODE_BURST_DATA, 0xEE60, 0x2,
	I2C_MODE_BURST_DATA, 0xB0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x5E80, 0x2,
	I2C_MODE_BURST_DATA, 0x1BE0, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x4580, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x2E50, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x6200, 0x2,
	I2C_MODE_BURST_DATA, 0x4000, 0x2,
	I2C_MODE_BURST_DATA, 0x9404, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x38E0, 0x2,
	I2C_MODE_BURST_DATA, 0x4000, 0x2,
	I2C_MODE_BURST_DATA, 0xD000, 0x2,
	I2C_MODE_BURST_DATA, 0x4000, 0x2,
	I2C_MODE_BURST_DATA, 0xA410, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x2C66, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x0890, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x3620, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x0DE0, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x2BC0, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x3580, 0x2,
	I2C_MODE_BURST_DATA, 0x4000, 0x2,
	I2C_MODE_BURST_DATA, 0x7000, 0x2,
	I2C_MODE_BURST_DATA, 0x40F2, 0x2,
	I2C_MODE_BURST_DATA, 0xFF31, 0x2,
	I2C_MODE_BURST_DATA, 0x0B20, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xE2F8, 0x2,
	I2C_MODE_BURST_DATA, 0x3868, 0x2,
	I2C_MODE_BURST_DATA, 0xB0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x1213, 0x2,
	I2C_MODE_BURST_DATA, 0x19B1, 0x2,
	I2C_MODE_BURST_DATA, 0x4846, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xC7F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0AE0, 0x2,
	I2C_MODE_BURST_DATA, 0xB0F8, 0x2,
	I2C_MODE_BURST_DATA, 0x1403, 0x2,
	I2C_MODE_BURST_DATA, 0xC0B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2889, 0x2,
	I2C_MODE_BURST_DATA, 0xB4F9, 0x2,
	I2C_MODE_BURST_DATA, 0x2410, 0x2,
	I2C_MODE_BURST_DATA, 0x8842, 0x2,
	I2C_MODE_BURST_DATA, 0x13DB, 0x2,
	I2C_MODE_BURST_DATA, 0x4846, 0x2,
	I2C_MODE_BURST_DATA, 0xFFF7, 0x2,
	I2C_MODE_BURST_DATA, 0x5AFF, 0x2,
	I2C_MODE_BURST_DATA, 0x78B1, 0x2,
	I2C_MODE_BURST_DATA, 0x2E81, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xD0F8, 0x2,
	I2C_MODE_BURST_DATA, 0xE868, 0x2,
	I2C_MODE_BURST_DATA, 0x2861, 0x2,
	I2C_MODE_BURST_DATA, 0x208E, 0x2,
	I2C_MODE_BURST_DATA, 0x18B1, 0x2,
	I2C_MODE_BURST_DATA, 0x608E, 0x2,
	I2C_MODE_BURST_DATA, 0x18B9, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xCDF8, 0x2,
	I2C_MODE_BURST_DATA, 0x608E, 0x2,
	I2C_MODE_BURST_DATA, 0x10B1, 0x2,
	I2C_MODE_BURST_DATA, 0xE889, 0x2,
	I2C_MODE_BURST_DATA, 0x2887, 0x2,
	I2C_MODE_BURST_DATA, 0x6686, 0x2,
	I2C_MODE_BURST_DATA, 0x4046, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0xF047, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xC8B8, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0xF087, 0x2,
	I2C_MODE_BURST_DATA, 0x10B5, 0x2,
	I2C_MODE_BURST_DATA, 0x6021, 0x2,
	I2C_MODE_BURST_DATA, 0x0B20, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xC6F8, 0x2,
	I2C_MODE_BURST_DATA, 0x8106, 0x2,
	I2C_MODE_BURST_DATA, 0x4FEA, 0x2,
	I2C_MODE_BURST_DATA, 0x4061, 0x2,
	I2C_MODE_BURST_DATA, 0x05D5, 0x2,
	I2C_MODE_BURST_DATA, 0x0029, 0x2,
	I2C_MODE_BURST_DATA, 0x0BDA, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x1040, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xC1B8, 0x2,
	I2C_MODE_BURST_DATA, 0x0029, 0x2,
	I2C_MODE_BURST_DATA, 0x03DA, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x1040, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xC0B8, 0x2,
	I2C_MODE_BURST_DATA, 0x8006, 0x2,
	I2C_MODE_BURST_DATA, 0x03D5, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x1040, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xBFB8, 0x2,
	I2C_MODE_BURST_DATA, 0x10BD, 0x2,
	I2C_MODE_BURST_DATA, 0x70B5, 0x2,
	I2C_MODE_BURST_DATA, 0x1E4C, 0x2,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	I2C_MODE_BURST_DATA, 0x2080, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xDF40, 0x2,
	I2C_MODE_BURST_DATA, 0x1C4D, 0x2,
	I2C_MODE_BURST_DATA, 0x2861, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xD940, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xB941, 0x2,
	I2C_MODE_BURST_DATA, 0xA861, 0x2,
	I2C_MODE_BURST_DATA, 0x1948, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xB2F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xD531, 0x2,
	I2C_MODE_BURST_DATA, 0x6060, 0x2,
	I2C_MODE_BURST_DATA, 0x1748, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xABF8, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x1341, 0x2,
	I2C_MODE_BURST_DATA, 0xA060, 0x2,
	I2C_MODE_BURST_DATA, 0x1448, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0xA4F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xED21, 0x2,
	I2C_MODE_BURST_DATA, 0xE060, 0x2,
	I2C_MODE_BURST_DATA, 0x1248, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x9DF8, 0x2,
	I2C_MODE_BURST_DATA, 0x2061, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x4920, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x0B21, 0x2,
	I2C_MODE_BURST_DATA, 0xE863, 0x2,
	I2C_MODE_BURST_DATA, 0x0E48, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x93F8, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0x8511, 0x2,
	I2C_MODE_BURST_DATA, 0x0C48, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x8DF8, 0x2,
	I2C_MODE_BURST_DATA, 0x0022, 0x2,
	I2C_MODE_BURST_DATA, 0xAFF2, 0x2,
	I2C_MODE_BURST_DATA, 0xA701, 0x2,
	I2C_MODE_BURST_DATA, 0xBDE8, 0x2,
	I2C_MODE_BURST_DATA, 0x7040, 0x2,
	I2C_MODE_BURST_DATA, 0x0948, 0x2,
	I2C_MODE_BURST_DATA, 0x00F0, 0x2,
	I2C_MODE_BURST_DATA, 0x85B8, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x4580, 0x2,
	I2C_MODE_BURST_DATA, 0x2000, 0x2,
	I2C_MODE_BURST_DATA, 0x0840, 0x2,
	I2C_MODE_BURST_DATA, 0x0001, 0x2,
	I2C_MODE_BURST_DATA, 0x020D, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x67CD, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x3AE1, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x72B1, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x56D7, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x5735, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0631, 0x2,
	I2C_MODE_BURST_DATA, 0x45F6, 0x2,
	I2C_MODE_BURST_DATA, 0x250C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F6, 0x2,
	I2C_MODE_BURST_DATA, 0xF31C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x4AF2, 0x2,
	I2C_MODE_BURST_DATA, 0xD74C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x40F2, 0x2,
	I2C_MODE_BURST_DATA, 0x0D2C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x010C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x46F2, 0x2,
	I2C_MODE_BURST_DATA, 0xCD7C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x47F2, 0x2,
	I2C_MODE_BURST_DATA, 0xB12C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x47F2, 0x2,
	I2C_MODE_BURST_DATA, 0x4F2C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x47F6, 0x2,
	I2C_MODE_BURST_DATA, 0x017C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x47F6, 0x2,
	I2C_MODE_BURST_DATA, 0x636C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x47F2, 0x2,
	I2C_MODE_BURST_DATA, 0x0D0C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x4AF2, 0x2,
	I2C_MODE_BURST_DATA, 0x5F4C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0xA56C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x1F5C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x7F5C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x312C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x40F2, 0x2,
	I2C_MODE_BURST_DATA, 0xAB2C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0xF34C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x395C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x40F2, 0x2,
	I2C_MODE_BURST_DATA, 0x117C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x40F2, 0x2,
	I2C_MODE_BURST_DATA, 0xD92C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x054C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0xAF3C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x45F2, 0x2,
	I2C_MODE_BURST_DATA, 0x4B2C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x4AF6, 0x2,
	I2C_MODE_BURST_DATA, 0xE75C, 0x2,
	I2C_MODE_BURST_DATA, 0xC0F2, 0x2,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	I2C_MODE_BURST_DATA, 0x6047, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x30D5, 0x2,
	I2C_MODE_BURST_DATA, 0x0103, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x005E, 0x2,
	0x602A, 0x1662, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x1E00, 0x2,
	0x602A, 0x1C9A, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	0x602A, 0x0FF2, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	0x602A, 0x0EF6, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0100, 0x2,
	0x602A, 0x23B2, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0001, 0x2,
	0x602A, 0x0FE4, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0107, 0x2,
	I2C_MODE_BURST_DATA, 0x07D0, 0x2,
	0x602A, 0x12F8, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x3D09, 0x2,
	0x602A, 0x0E18, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0040, 0x2,
	0x602A, 0x1066, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x000C, 0x2,
	0x602A, 0x13DE, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	0x602A, 0x12F2, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0F0F, 0x2,
	0x602A, 0x13DC, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x806F, 0x2,
	0xF46E, 0x00C3, 0x2,
	0xF46C, 0xBFA0, 0x2,
	0xF44A, 0x0007, 0x2,
	0xF456, 0x000A, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x12F6, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x7008, 0x2,
	0x0BC6, 0x0000, 0x2,
	0x0B36, 0x0001, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x2BC2, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	0x602A, 0x2BC4, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0020, 0x2,
	0x602A, 0x6204, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0001, 0x2,
	0x602A, 0x6208, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x0000, 0x2,
	I2C_MODE_BURST_DATA, 0x0030, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x17C0, 0x2,
	I2C_MODE_BURST_ADDR, 0x6F12, 0x0,
	I2C_MODE_BURST_DATA, 0x143C, 0x2,
	0x0101, 0x00, 0x1,
};

/* 4:3, 16x10 margin, EXTCLK 24.37Mhz */
const u32 sensor_3m5_setfile_C_2592x1944_30fps[] = {
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0344, 0x0330, 0x2,
	0x0346, 0x0254, 0x2,
	0x0348, 0x0D4F, 0x2,
	0x034A, 0x09EB, 0x2,
	0x034C, 0x0A20, 0x2,
	0x034E, 0x0798, 0x2,
	0x0340, 0x0876, 0x2,
	0x0342, 0x0E70, 0x2,
	0x0900, 0x0011, 0x2,
	0x0380, 0x0001, 0x2,
	0x0382, 0x0001, 0x2,
	0x0384, 0x0001, 0x2,
	0x0386, 0x0001, 0x2,
	0x0402, 0x1010, 0x2,
	0x0404, 0x1000, 0x2,
	0x0350, 0x0000, 0x2,
	0x0352, 0x0000, 0x2,
	0x0136, 0x1A00, 0x2,
	0x013E, 0x0000, 0x2,
	0x0300, 0x0008, 0x2,
	0x0302, 0x0001, 0x2,
	0x0304, 0x0006, 0x2,
	0x0306, 0x00DE, 0x2,
	0x0308, 0x0008, 0x2,
	0x030A, 0x0001, 0x2,
	0x030C, 0x0000, 0x2,
	0x030E, 0x0003, 0x2,
	0x0310, 0x0054, 0x2,
	0x0312, 0x0000, 0x2,
	0x0B06, 0x0101, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1FF6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x021E, 0x0000, 0x2,
	0x0202, 0x0100, 0x2,
	0x0204, 0x0020, 0x2,
	0x0D00, 0x0101, 0x2,
	0x0D02, 0x0001, 0x2,
	0x0114, 0x0101, 0x2,
	0x0116, 0x2B00, 0x2,
	0x0D06, 0x01F8, 0x2,
	0x0D08, 0x02F0, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x0F10, 0x2,
	0x6F12, 0x0003, 0x2,
	0x602A, 0x0F12, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x2BC0, 0x2,
	0x6F12, 0x0001, 0x2,
	0x0B30, 0x0000, 0x2,
	0x0B32, 0x0000, 0x2,
	0x0B34, 0x0001, 0x2,
	0x0101, 0x0, 0x1,
};

const u32 sensor_3m5_setfile_C_dualsync_Slave[] = {
/*	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x0F10,	0x0003,	0x02,
	0x0F12,	0x0200,	0x02,
	0x6204,	0x0000,	0x02,
	0x2BC0,	0x0000,	0x02,
	0x2BF2,	0x0000,	0x02,
	0x2BD8,	0x0001,	0x02,
	0x2BC2,	0x0014,	0x02,
	0x2BC4,	0x0014,	0x02,
	0x2BCA,	0x0010,	0x02,
	0x2BCE,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0B30,	0x0001,	0x02,
	0x0B32,	0x0001,	0x02,
	0x0B34,	0x0001,	0x02,
	0x0B36,	0x0001,	0x02,
*/
};

const u32 sensor_3m5_setfile_C_dualsync_Master[] = {
/*	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x0F10,	0x0003,	0x02,
	0x0F12,	0x0100,	0x02,
	0x6204,	0x0000,	0x02,
	0x2BC0,	0x0000,	0x02,
	0x2BF2,	0x0000,	0x02,
	0x2BD8,	0x0000,	0x02,
	0x2BC2,	0x0014,	0x02,
	0x2BC4,	0x0014,	0x02,
	0x2BCA,	0x0040,	0x02,
	0x2BCE,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0B30,	0x0001,	0x02,
	0x0B32,	0x0001,	0x02,
	0x0B34,	0x0001,	0x02,
	0x0B36,	0x0100,	0x02,
*/
};

const struct sensor_pll_info_compact sensor_3m5_pllinfo_C_2592x1944_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1456000000, /* mipi_datarate */
	481000000,	/* pclk  = VT pix CLK (this value is different by cis) */
	2166, /* frame_length_lines	(0x0340) */
	3696, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_3m5_setfiles_C[] = {
	sensor_3m5_setfile_C_2592x1944_30fps,
};

static const u32 sensor_3m5_setfile_C_sizes[] = {
	ARRAY_SIZE(sensor_3m5_setfile_C_2592x1944_30fps),
};

static const struct sensor_pll_info_compact *sensor_3m5_pllinfos_C[] = {
	&sensor_3m5_pllinfo_C_2592x1944_30fps,
};

static const struct sensor_crop_xy_info sensor_3m5_crop_xy_C[] = {
	{0, 0},
	{0, 0x17A},
};
#endif