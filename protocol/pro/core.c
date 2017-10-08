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
#include "../../lowlevel/pro.h"
#include "../../device.h"
#include "../../driver.h"

int corsairlink_pro_device_id(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, uint8_t *device_id)
{
	//memcpy(device_id, 0x00, 1);
	(*device_id) = 0xFF;
	return 0;
}

int corsairlink_pro_name(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *name)
{
	sprintf(name, "%s", dev->name);
	return 0;
}

int corsairlink_pro_vendor(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *name)
{
	sprintf(name, "Corsair");
	return 0;
}

int corsairlink_pro_product(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *name)
{
	sprintf(name, "%s", dev->name);
	return 0;
}

int corsairlink_pro_firmware_id(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x02;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}

int corsairlink_pro_get_software_id(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x03;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}

int corsairlink_pro_set_software_id(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x04;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}

int corsairlink_pro_set_firmware_update(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x05;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}

int corsairlink_pro_get_firmware_update(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x06;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}

int corsairlink_pro_set_factory_testing_mode(struct corsair_device_info *dev,
			struct libusb_device_handle *handle, char *firmware)
{
	int rr;
	uint8_t response[32];
	uint8_t commands[32] ;
	memset(response, 0, sizeof(response));
	memset(commands, 0, sizeof(commands));

	commands[0] = 0x07;

	rr = dev->driver->write(handle, dev->write_endpoint, commands, 32);
	rr = dev->driver->read(handle, dev->read_endpoint, response, 32);

	sprintf(firmware, "%d.%d.%d", response[1], response[2], response[3]);

	return rr;
}