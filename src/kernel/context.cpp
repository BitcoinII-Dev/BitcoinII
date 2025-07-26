// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <kernel/context.h>

#include <crypto/sha256.h>
#include <key.h>
#include <logging.h>
#include <pubkey.h>
#include <random.h>

#include <string>


namespace kernel {
Context::Context()
{
    std::string sha256_algo = SHA256AutoDetect();
    LogPrintf("Using the '%s' SHA256 implementation\n", sha256_algo);
    RandomInit();
    ECC_Start();
}

Context::~Context()
{
    ECC_Stop();
}

} // namespace kernel
