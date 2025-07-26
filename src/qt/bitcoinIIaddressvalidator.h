// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_QT_BITCOINIIADDRESSVALIDATOR_H
#define BITCOINII_QT_BITCOINIIADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinIIAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinIIAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** BitcoinII address widget validator, checks for a valid bitcoinII address.
 */
class BitcoinIIAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinIIAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOINII_QT_BITCOINIIADDRESSVALIDATOR_H
