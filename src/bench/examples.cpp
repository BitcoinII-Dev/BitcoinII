// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <bench/bench.h>

// Extremely fast-running benchmark:
#include <math.h>

volatile double sum = 0.0; // volatile, global so not optimized away

static void Trig(benchmark::Bench& bench)
{
    double d = 0.01;
    bench.run([&] {
        sum = sum + sin(d);
        d += 0.000001;
    });
}

BENCHMARK(Trig, benchmark::PriorityLevel::HIGH);
