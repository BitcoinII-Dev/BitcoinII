// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_KERNEL_MEMPOOL_REMOVAL_REASON_H
#define BITCOINII_KERNEL_MEMPOOL_REMOVAL_REASON_H

#include <string>

/** Reason why a transaction was removed from the mempool,
 * this is passed to the notification signal.
 */
enum class MemPoolRemovalReason {
    EXPIRY,      //!< Expired from mempool
    SIZELIMIT,   //!< Removed in size limiting
    REORG,       //!< Removed for reorganization
    BLOCK,       //!< Removed for block
    CONFLICT,    //!< Removed for conflict with in-block transaction
    REPLACED,    //!< Removed for replacement
};

std::string RemovalReasonToString(const MemPoolRemovalReason& r) noexcept;

#endif // BITCOINII_KERNEL_MEMPOOL_REMOVAL_REASON_H
