// transaction.c

#include <stdio.h>
#include "transaction.h"

void initializeTransaction(struct Transaction* transaction, int transactionId, const struct Account* sourceAccount,
                           const struct Account* destinationAccount, double amount) {
    transaction->transactionId = transactionId;
    transaction->sourceAccount = *sourceAccount;
    transaction->destinationAccount = *destinationAccount;
    transaction->amount = amount;
}

void executeTransaction(struct Transaction* transaction) {
    if (transaction->amount <= transaction->sourceAccount.balance) {
        withdraw(&transaction->sourceAccount, transaction->amount);
        deposit(&transaction->destinationAccount, transaction->amount);
        printf("Transaction successful\n");
    } else {
        printf("Transaction failed: Insufficient funds\n");
    }
}

void displayTransactionInfo(const struct Transaction* transaction) {
    printf("Transaction ID: %d\n", transaction->transactionId);
    printf("Amount: %.2f\n", transaction->amount);
    printf("Source Account Information:\n");
    displayAccountInfo(&transaction->sourceAccount);
    printf("Destination Account Information:\n");
    displayAccountInfo(&transaction->destinationAccount);
}
