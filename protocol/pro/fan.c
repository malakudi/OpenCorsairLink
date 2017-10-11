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
#include "core.h"

int corsairlink_pro_get_fan_setup_mask(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x20;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_get_fan_speed_rpm(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x21;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_get_fan_speed_pwm(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x22;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_set_fan_speed_pwm(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x23;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_set_fan_speed_rpm(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x24;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_set_fan_custom_curve(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x25;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_set_fan_temperature(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x26;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}

int corsairlink_pro_set_fan_3pin_voltage(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x27;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 14);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	return rr;
}
