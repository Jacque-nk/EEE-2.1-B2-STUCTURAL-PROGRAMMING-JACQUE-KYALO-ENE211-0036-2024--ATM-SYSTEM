#include <stdio.h>
#include "Deposit.h"

void depositMoney(double *balance)
{
    double amount;
    
    printf("=== Deposit ===\n");
    printf("Enter amount to deposit: Kshs. ");
    scanf("%lf", &amount);
    
    if (amount > 0) {
        *balance += amount;
        printf("Successfully deposited Kshs.%.2lf\n", amount);
        printf("New balance: Kshs.%.2lf\n", *balance);
    } else {
        printf("Invalid amount! Deposit must be positive.\n");
    }
}