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
	StaticColor  = 0,
	Temperature  = 3,
	RainbowCycle = 4,
	RainbowWave  = 5,
	ColourShift  = 6,
	ColourPulse  = 7,
	ColourWave   = 8,
	Visor        = 9,
	Marquee      = 10,
	Strobing     = 11,
	Sequential   = 12,
	
};

enum CorsairLightingNodePro_LED_Rate {
	ZeroRate = 0,
	HalfRate = 1,
	FullRate = 2,
}

