// bank_system.c

#include <stdio.h>
#include "account.h"
#include "transaction.h"
#include "customer.h"

int main() {
    // Create customers
    struct Customer customer1, customer2;
    initializeCustomer(&customer1, 1, "Alice");
    initializeCustomer(&customer2, 2, "Bob");

    // Create accounts
    struct Account account1, account2;
    initializeAccount(&account1, 101, customer1.name, 1000.0);
    initializeAccount(&account2, 102, customer2.name, 500.0);

    // Display initial account information
    printf("Initial Account Information:\n");
    displayAccountInfo(&account1);
    printf("\n");
    displayAccountInfo(&account2);

    // Perform a transaction
    struct Transaction transaction;
    initializeTransaction(&transaction, 1001, &account1, &account2, 300.0);
    executeTransaction(&transaction);

    // Display updated account information
    printf("\nUpdated Account Information:\n");
    displayAccountInfo(&account1);
    printf("\n");
    displayAccountInfo(&account2);

    return 0;
}
