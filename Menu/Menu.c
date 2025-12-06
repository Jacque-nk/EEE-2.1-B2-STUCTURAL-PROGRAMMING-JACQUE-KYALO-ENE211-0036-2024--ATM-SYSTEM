#include <stdio.h>
#include "Menu.h"
#include "../Balance/Balance.h"
#include "../Deposit/Deposit.h"
#include "../Withdrawal/Withdrawal.h"
#include "../Exiting-System/Exiting-System.h"

void showMenu(double *balance)
{
    int choice;
    
    do {
        printf("\n=== Device Menu ===\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdrawal\n");
        printf("4. Exit\n");
        printf("Select your choice(1, 2, 3 or 4): ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1:
                checkBalance(*balance);
                break;
            case 2:
                depositMoney(balance);
                break;
            case 3:
                withdrawMoney(balance);
                break;
            case 4:
                exitSystem();
                break;
            default:
                printf("Invalid option! Please try again\n");
        }
        
    } while (choice != 4);
}