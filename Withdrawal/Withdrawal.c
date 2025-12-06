#include <stdio.h>
#include "Withdrawal.h"

void withdrawMoney(double *balance)
{
    double amount;
    
    printf("=== Withdrawal ===\n");
    printf("Enter amount to withdraw: Kshs. ");
    scanf("%lf", &amount);
    
    if (amount > 0) {
        if (amount <= *balance) {
            *balance -= amount;
            printf("Successfully withdrew Kshs.%.2lf\n", amount);
            printf("New balance: Kshs.%.2lf\n", *balance);
        } else {
            printf("Insufficient funds! Your balance is Kshs.%.2lf\n", *balance);
        }
    } else {
        printf("Invalid amount! Withdrawal must be positive.\n");
    }
}