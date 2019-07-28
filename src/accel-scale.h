/*
 * Copyright (c) 2019 Daniel Stuart <daniel.stuart14@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3 as published by
 * the Free Software Foundation.
 *
 */

#include <glib.h>
#include <gudev/gudev.h>

double get_accel_scale (GUdevDevice *device);
