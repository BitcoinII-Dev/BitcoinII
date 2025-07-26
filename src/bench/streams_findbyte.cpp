// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <bench/bench.h>

#include <streams.h>
#include <util/fs.h>

#include <cstddef>
#include <cstdint>
#include <cstdio>

static void FindByte(benchmark::Bench& bench)
{
    // Setup
    AutoFile file{fsbridge::fopen("streams_tmp", "w+b")};
    const size_t file_size = 200;
    uint8_t data[file_size] = {0};
    data[file_size-1] = 1;
    file << data;
    std::rewind(file.Get());
    BufferedFile bf{file, /*nBufSize=*/file_size + 1, /*nRewindIn=*/file_size};

    bench.run([&] {
        bf.SetPos(0);
        bf.FindByte(std::byte(1));
    });

    // Cleanup
    file.fclose();
    fs::remove("streams_tmp");
}

BENCHMARK(FindByte, benchmark::PriorityLevel::HIGH);
