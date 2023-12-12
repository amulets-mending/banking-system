// customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

struct Customer {
    int customerId;
    char name[50];
};

void initializeCustomer(struct Customer* customer, int customerId, const char* name);
void displayCustomerInfo(const struct Customer* customer);

#endif
