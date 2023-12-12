// customer.c

#include <stdio.h>
#include <string.h>
#include "customer.h"

void initializeCustomer(struct Customer* customer, int customerId, const char* name) {
    customer->customerId = customerId;
    strncpy(customer->name, name, sizeof(customer->name));
}

void displayCustomerInfo(const struct Customer* customer) {
    printf("Customer ID: %d\n", customer->customerId);
    printf("Name: %s\n", customer->name);
}
