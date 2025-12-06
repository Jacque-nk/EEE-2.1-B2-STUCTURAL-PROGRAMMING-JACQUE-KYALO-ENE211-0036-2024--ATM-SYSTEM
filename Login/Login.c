#include <stdio.h>
#include "Login.h"

int performLogin()
{
    int correctPIN = 1234;
    int userPIN;
    int attempts = 3;
    
    do {
        printf("Please enter PIN: \n");
        scanf("%d", &userPIN);
        
        // Check PIN length
        if (userPIN <= 999) {
            printf("userPIN is too short\n");
            attempts--;
        }
        else if (userPIN > 9999) {
            printf("userPin is too long\n");
            attempts--;
        }
        // Check if PIN is correct
        else {
            if (userPIN == correctPIN) {
                printf("Access Granted\n\n");
                return 1;  // Login successful
            }
            else {
                attempts--;
                printf("Incorrect PIN. You have %d attempt(s) left.\n", attempts);
            }
        }
        
        if (attempts == 0) {
            printf("Account Locked. No attempts left.\n");
        }
    } while (attempts > 0);
    
    return 0;  // Login failed
}