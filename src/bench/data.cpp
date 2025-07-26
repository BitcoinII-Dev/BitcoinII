// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <bench/data.h>

namespace benchmark {
namespace data {

#include <bench/data/block413567.raw.h>
const std::vector<uint8_t> block413567{std::begin(block413567_raw), std::end(block413567_raw)};

} // namespace data
} // namespace benchmark
