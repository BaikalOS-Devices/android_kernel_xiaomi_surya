/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

//#define LIST_WL_DEFAULT "epoll_hvdcp_opti_file;wlan;netmgr_wl;epoll_hvdcp_opti_file:;IPA_WS;DIAG_WS;smp2p-sleepstate;epoll_hvdcp_opti_epollfd;epoll_hvdcp_opti_file:NETLINK;hal_bluetooth_lock;"

#define LIST_WL_DEFAULT "wlan;netmgr_wl;IPA_WS;DIAG_WS;smp2p-sleepstate;epoll_hvdcp_opti_file:NETLINK;hal_bluetooth_lock"

//#define LIST_WL_DEFAULT				"netmgr_wl;NETLINK;IPA_WS;[timerfd];hal_bluetooth_lock"

#define LENGTH_LIST_WL			255
#define LENGTH_LIST_WL_DEFAULT		95
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
