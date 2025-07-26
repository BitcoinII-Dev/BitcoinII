// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_IPC_EXCEPTION_H
#define BITCOINII_IPC_EXCEPTION_H

#include <stdexcept>

namespace ipc {
//! Exception class thrown when a call to remote method fails due to an IPC
//! error, like a socket getting disconnected.
class Exception : public std::runtime_error
{
public:
    using std::runtime_error::runtime_error;
};
} // namespace ipc

#endif // BITCOINII_IPC_EXCEPTION_H
