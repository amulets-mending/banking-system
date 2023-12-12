// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct Account {
    int accountId;
    char customerName[50];
    double balance;
};

void initializeAccount(struct Account* account, int accountId, const char* customerName, double balance);
void displayAccountInfo(const struct Account* account);
void deposit(struct Account* account, double amount);
void withdraw(struct Account* account, double amount);

#endif
