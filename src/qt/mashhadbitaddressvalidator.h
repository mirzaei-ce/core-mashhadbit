// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MASHHADBIT_QT_MASHHADBITADDRESSVALIDATOR_H
#define MASHHADBIT_QT_MASHHADBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MashhadbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MashhadbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Mashhadbit address widget validator, checks for a valid mashhadbit address.
 */
class MashhadbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MashhadbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // MASHHADBIT_QT_MASHHADBITADDRESSVALIDATOR_H
