// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <kernel/mempool_removal_reason.h>

#include <cassert>
#include <string>

std::string RemovalReasonToString(const MemPoolRemovalReason& r) noexcept
{
    switch (r) {
        case MemPoolRemovalReason::EXPIRY: return "expiry";
        case MemPoolRemovalReason::SIZELIMIT: return "sizelimit";
        case MemPoolRemovalReason::REORG: return "reorg";
        case MemPoolRemovalReason::BLOCK: return "block";
        case MemPoolRemovalReason::CONFLICT: return "conflict";
        case MemPoolRemovalReason::REPLACED: return "replaced";
    }
    assert(false);
}
