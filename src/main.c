/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

void main(void)
{
	// img_mgmt_register_group(); // Not needed in ncs 2.3.0
	printk("Test UPDATE\n");
	printk("Application for Updating net core and app core (application and mcuboot)! \n");
}
