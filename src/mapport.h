// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_MAPPORT_H
#define BITCOINII_MAPPORT_H

static constexpr bool DEFAULT_UPNP = false;

static constexpr bool DEFAULT_NATPMP = false;

enum MapPortProtoFlag : unsigned int {
    NONE = 0x00,
    UPNP = 0x01,
    NAT_PMP = 0x02,
};

void StartMapPort(bool use_upnp, bool use_natpmp);
void InterruptMapPort();
void StopMapPort();

#endif // BITCOINII_MAPPORT_H
