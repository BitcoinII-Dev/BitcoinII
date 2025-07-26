// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_KERNEL_VALIDATION_CACHE_SIZES_H
#define BITCOINII_KERNEL_VALIDATION_CACHE_SIZES_H

#include <script/sigcache.h>

#include <cstddef>
#include <limits>

namespace kernel {
struct ValidationCacheSizes {
    size_t signature_cache_bytes{DEFAULT_MAX_SIG_CACHE_BYTES / 2};
    size_t script_execution_cache_bytes{DEFAULT_MAX_SIG_CACHE_BYTES / 2};
};
}

#endif // BITCOINII_KERNEL_VALIDATION_CACHE_SIZES_H
