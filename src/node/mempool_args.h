// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_NODE_MEMPOOL_ARGS_H
#define BITCOINII_NODE_MEMPOOL_ARGS_H

#include <util/result.h>

class ArgsManager;
class CChainParams;
struct bilingual_str;
namespace kernel {
struct MemPoolOptions;
};

/**
 * Overlay the options set in \p argsman on top of corresponding members in \p mempool_opts.
 * Returns an error if one was encountered.
 *
 * @param[in]  argsman The ArgsManager in which to check set options.
 * @param[in,out] mempool_opts The MemPoolOptions to modify according to \p argsman.
 */
[[nodiscard]] util::Result<void> ApplyArgsManOptions(const ArgsManager& argsman, const CChainParams& chainparams, kernel::MemPoolOptions& mempool_opts);


#endif // BITCOINII_NODE_MEMPOOL_ARGS_H
