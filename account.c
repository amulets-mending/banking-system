// account.c

#include <stdio.h>
#include <string.h>
#include "account.h"

void initializeAccount(struct Account* account, int accountId, const char* customerName, double balance) {
    account->accountId = accountId;
    strncpy(account->customerName, customerName, sizeof(account->customerName));
    account->balance = balance;
}

void displayAccountInfo(const struct Account* account) {
    printf("Account ID: %d\n", account->accountId);
    printf("Customer Name: %s\n", account->customerName);
    printf("Balance: %.2f\n", account->balance);
}

void deposit(struct Account* account, double amount) {
    account->balance += amount;
}

void withdraw(struct Account* account, double amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    } else {
        printf("Insufficient funds\n");
    }
}
