// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2020 Adithya R <gh0strider.2k18.reborn@gmail.com>.
 */

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel_profile.h>

#ifdef MODULE_PARAM_PREFIX
#undef MODULE_PARAM_PREFIX
#endif
#define MODULE_PARAM_PREFIX "kernel_profile."

static int __read_mostly profile = 0;
module_param(profile, int, 0664);

int kernel_profile(void)
{
	return profile;
}

void set_kernel_profile(int _profile)
{
	profile = _profile;
}
