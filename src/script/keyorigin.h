// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINII_SCRIPT_KEYORIGIN_H
#define BITCOINII_SCRIPT_KEYORIGIN_H

#include <serialize.h>
#include <vector>

struct KeyOriginInfo
{
    unsigned char fingerprint[4]; //!< First 32 bits of the Hash160 of the public key at the root of the path
    std::vector<uint32_t> path;

    friend bool operator==(const KeyOriginInfo& a, const KeyOriginInfo& b)
    {
        return std::equal(std::begin(a.fingerprint), std::end(a.fingerprint), std::begin(b.fingerprint)) && a.path == b.path;
    }

    friend bool operator<(const KeyOriginInfo& a, const KeyOriginInfo& b)
    {
        // Compare the fingerprints lexicographically
        int fpr_cmp = memcmp(a.fingerprint, b.fingerprint, 4);
        if (fpr_cmp < 0) {
            return true;
        } else if (fpr_cmp > 0) {
            return false;
        }
        // Compare the sizes of the paths, shorter is "less than"
        if (a.path.size() < b.path.size()) {
            return true;
        } else if (a.path.size() > b.path.size()) {
            return false;
        }
        // Paths same length, compare them lexicographically
        return a.path < b.path;
    }

    SERIALIZE_METHODS(KeyOriginInfo, obj) { READWRITE(obj.fingerprint, obj.path); }

    void clear()
    {
        memset(fingerprint, 0, 4);
        path.clear();
    }
};

#endif // BITCOINII_SCRIPT_KEYORIGIN_H
