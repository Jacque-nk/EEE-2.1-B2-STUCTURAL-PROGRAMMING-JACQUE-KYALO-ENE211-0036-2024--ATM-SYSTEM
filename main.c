#include <stdio.h>
#include <stdlib.h>
#include "Login/Login.h"       
#include "Menu/Menu.h"        

int main()
{
    double balance = 100.00;  // Starting balance
    
    // Perform login
    if (!performLogin()) {
        return 0;  // Exit if login fails
    }
    
    // Show menu and handle transactions
    showMenu(&balance);
    
    return 0;
}