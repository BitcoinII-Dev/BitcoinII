// Copyright (c) 2009-2025 Satoshi Nakamoto
// Copyright (c) 2009-2024 The Bitcoin Core developers
// Copyright (c) 2025 The BitcoinII developers
// Forked from Bitcoin Core version 0.27.0
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef BITCOINII_QT_EDITADDRESSDIALOG_H
#define BITCOINII_QT_EDITADDRESSDIALOG_H

#include <QDialog>

class AddressTableModel;

namespace Ui {
    class EditAddressDialog;
}

QT_BEGIN_NAMESPACE
class QDataWidgetMapper;
QT_END_NAMESPACE

/** Dialog for editing an address and associated information.
 */
class EditAddressDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        NewSendingAddress,
        EditReceivingAddress,
        EditSendingAddress
    };

    explicit EditAddressDialog(Mode mode, QWidget *parent = nullptr);
    ~EditAddressDialog();

    void setModel(AddressTableModel *model);
    void loadRow(int row);

    QString getAddress() const;
    void setAddress(const QString &address);

public Q_SLOTS:
    void accept() override;

private:
    bool saveCurrentRow();

    /** Return a descriptive string when adding an already-existing address fails. */
    QString getDuplicateAddressWarning() const;

    Ui::EditAddressDialog *ui;
    QDataWidgetMapper* mapper{nullptr};
    Mode mode;
    AddressTableModel* model{nullptr};

    QString address;
};

#endif // BITCOINII_QT_EDITADDRESSDIALOG_H
