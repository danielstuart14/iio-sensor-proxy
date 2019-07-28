/*
 * Copyright (c) 2019 Daniel Stuart <daniel.stuart14@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3 as published by
 * the Free Software Foundation.
 *
 */

#include "accel-scale.h"

double get_accel_scale (GUdevDevice *device) {
	double scale;

	scale = g_udev_device_get_sysfs_attr_as_double (device, "in_accel_scale");
	if (scale != 0.0) {
		g_debug ("Attribute in_accel_scale ('%f') found on sysfs", scale);
		return scale;
	}

	scale = g_udev_device_get_sysfs_attr_as_double (device, "scale");
	if (scale != 0.0) {
		g_debug ("Attribute scale ('%f') found on sysfs", scale);
		return scale;
	}

	g_debug ("Failed to auto-detect scale, falling back to 1.0");
	return 1.0;
}
