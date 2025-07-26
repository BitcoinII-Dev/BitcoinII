// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINII_RPC_SERVER_UTIL_H
#define BITCOINII_RPC_SERVER_UTIL_H

#include <any>

class AddrMan;
class ArgsManager;
class CBlockPolicyEstimator;
class CConnman;
class CTxMemPool;
class ChainstateManager;
class PeerManager;
class BanMan;
namespace node {
struct NodeContext;
} // namespace node

node::NodeContext& EnsureAnyNodeContext(const std::any& context);
CTxMemPool& EnsureMemPool(const node::NodeContext& node);
CTxMemPool& EnsureAnyMemPool(const std::any& context);
BanMan& EnsureBanman(const node::NodeContext& node);
BanMan& EnsureAnyBanman(const std::any& context);
ArgsManager& EnsureArgsman(const node::NodeContext& node);
ArgsManager& EnsureAnyArgsman(const std::any& context);
ChainstateManager& EnsureChainman(const node::NodeContext& node);
ChainstateManager& EnsureAnyChainman(const std::any& context);
CBlockPolicyEstimator& EnsureFeeEstimator(const node::NodeContext& node);
CBlockPolicyEstimator& EnsureAnyFeeEstimator(const std::any& context);
CConnman& EnsureConnman(const node::NodeContext& node);
PeerManager& EnsurePeerman(const node::NodeContext& node);
AddrMan& EnsureAddrman(const node::NodeContext& node);
AddrMan& EnsureAnyAddrman(const std::any& context);

#endif // BITCOINII_RPC_SERVER_UTIL_H
