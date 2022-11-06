// SPDX-License-Identifier: GPL-2.0
/*
 */

#ifndef _KERNEL_PROFILE_H_
#define _KERNEL_PROFILE_H_

#include <linux/types.h>

#define KPROFILE_DEFAULT 0
#define KPROFILE_BATTERY 1
#define KPROFILE_PERFORMANCE 2
#define KPROFILE_RT 3

int kernel_profile(void);
void set_kernel_profile(int profile);

#endif /* _KERNEL_PROFILE_H_ */
