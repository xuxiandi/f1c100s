/*
 * (C) Copyright 2016 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <configs/rv1108_common.h>

/*
 * Default environment settings
 */
#define CONFIG_EXTRA_ENV_SETTINGS                                       \
	"netdev=eth0\0"                                                 \
	"ipaddr=172.16.12.50\0"                                         \
	"serverip=172.16.12.69\0"					\
	""
#define CONFIG_BOOTCOMMAND						\
	"sf probe;"							\
	"sf read 0x62000000 0x140800 0x500000;"				\
	"dcache off;"							\
	"go 0x62000000"

#endif
