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

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <libusb.h>
#include "../../lowlevel/asetek4.h"
#include "../../device.h"
#include "../../driver.h"
#include "../../print.h"

int corsairlink_asetek_tempsensorscount(struct corsair_device_info *dev, struct libusb_device_handle *handle, uint8_t *temperature_sensors_count)
{
	int rr = 0;
	// not defined - set default value of 3
	*(temperature_sensors_count) = 3;
	return rr;
}

int corsairlink_asetek_temperature(struct corsair_device_info *dev, struct libusb_device_handle *handle, uint8_t selector, uint16_t *temperature)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x10;
	commands[1] = 0x00; //RR
	commands[2] = 0xff; //GG
	commands[3] = 0xff; //BB
	commands[4] = 0x00;
	commands[5] = 0xff;
	commands[6] = 0xff;
	commands[7] = 0xff; //RR
	commands[8] = 0x00; //GG
	commands[9] = 0x00; //BB
	commands[10] = 0x41; // 0x37 = ??, 0x2d = ??
	commands[11] = 0x0a;
	commands[12] = 0x05;
	commands[13] = 0x01;
	commands[14] = 0x00;
	commands[15] = 0x00;
	commands[16] = 0x01;
	commands[17] = 0x00;
	commands[18] = 0x01;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 19);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	msg_debug("%02X %02X\n", response[10], response[14]);
	*(temperature) = (response[10]<<8) + response[14];

	return rr;
}
