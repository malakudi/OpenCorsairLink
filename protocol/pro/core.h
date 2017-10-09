/*
 * This file is part of OpenCorsairLink.
 * Copyright (C) 2017  Sean Nelson <audiohacked@gmail.com>

 * OpenCorsairLink is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * any later version.

 * OpenCorsairLink is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with OpenCorsairLink.  If not, see <http://www.gnu.org/licenses/>.
 */

enum CorsairLightingNodePro_LED_Mode {
	LNP_StaticColor  = 0,
	LNP_Temperature  = 3,
	LNP_RainbowCycle = 4,
	LNP_RainbowWave  = 5,
	LNP_ColourShift  = 6,
	LNP_ColourPulse  = 7,
	LNP_ColourWave   = 8,
	LNP_Visor        = 9,
	LNP_Marquee      = 10,
	LNP_Strobing     = 11,
	LNP_Sequential   = 12,
	
};

enum CorsairLightingNodePro_LED_Rate {
	LNP_ZeroRate = 0,
	LNP_HalfRate = 1,
	LNP_FullRate = 2,
}

enum CorsairLightingNodePro_LED_Type {
	LNP_LED_Strip = 0x0A,
	LNP_LED_HD_FAN = 0x0C,
	LNP_LED_SP_FAN = 0x0C,
	LNP_LED_LL_FAN = 0x00,
	LNP_Dominator = 0x1C,
}