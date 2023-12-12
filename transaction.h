// transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

struct Transaction {
    int transactionId;
    struct Account sourceAccount;
    struct Account destinationAccount;
    double amount;
};

void initializeTransaction(struct Transaction* transaction, int transactionId, const struct Account* sourceAccount,
                           const struct Account* destinationAccount, double amount);
void executeTransaction(struct Transaction* transaction);
void displayTransactionInfo(const struct Transaction* transaction);

#endif
