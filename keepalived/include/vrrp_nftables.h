/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        vrrp_nftables.c include file.
 *
 * Author:      Quentin Armitage, <quentin@armitage.org.uk>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2001-2018 Alexandre Cassen, <acassen@gmail.com>
 */

#ifndef _VRRP_NFTABLES_H
#define _VRRP_NFTABLES_H

#include "config.h"

#include "list.h"
#include "vrrp.h"
#include "vrrp_ipaddress.h"

#define	DEFAULT_NFTABLES_TABLE	"keepalived"

extern void nft_add_addresses(vrrp_t *);
extern void nft_remove_addresses(vrrp_t *);
extern void nft_remove_addresses_iplist(list);
extern void nft_cleanup(void);
extern void nft_end(void);

#endif
