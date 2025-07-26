// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <bench/bench.h>
#include <bench/data.h>
#include <util/strencodings.h>

static void HexStrBench(benchmark::Bench& bench)
{
    auto const& data = benchmark::data::block413567;
    bench.batch(data.size()).unit("byte").run([&] {
        auto hex = HexStr(data);
        ankerl::nanobench::doNotOptimizeAway(hex);
    });
}

BENCHMARK(HexStrBench, benchmark::PriorityLevel::HIGH);
