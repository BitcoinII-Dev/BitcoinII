// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <interfaces/init.h>

#include <memory>

namespace interfaces {
std::unique_ptr<Init> MakeWalletInit(int argc, char* argv[], int& exit_status)
{
    return std::make_unique<Init>();
}
} // namespace interfaces
