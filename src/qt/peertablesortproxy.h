// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_QT_PEERTABLESORTPROXY_H
#define BITCOINII_QT_PEERTABLESORTPROXY_H

#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class PeerTableSortProxy : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    explicit PeerTableSortProxy(QObject* parent = nullptr);

protected:
    bool lessThan(const QModelIndex& left_index, const QModelIndex& right_index) const override;
};

#endif // BITCOINII_QT_PEERTABLESORTPROXY_H
