// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_KERNEL_BLOCKMANAGER_OPTS_H
#define BITCOINII_KERNEL_BLOCKMANAGER_OPTS_H

#include <kernel/notifications_interface.h>
#include <util/fs.h>

#include <cstdint>

class CChainParams;

namespace kernel {

/**
 * An options struct for `BlockManager`, more ergonomically referred to as
 * `BlockManager::Options` due to the using-declaration in `BlockManager`.
 */
struct BlockManagerOpts {
    const CChainParams& chainparams;
    uint64_t prune_target{0};
    bool fast_prune{false};
    const fs::path blocks_dir;
    Notifications& notifications;
};

} // namespace kernel

#endif // BITCOINII_KERNEL_BLOCKMANAGER_OPTS_H
