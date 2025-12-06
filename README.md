# EEE 2.1 B2 STUCTURAL PROGRAMMING-ENE211-0036/2024
Simulated ATM System

## Project Structure
This project demonstrates modular programming with separate files for each functionality.

### Files:
- **main.c** - Entry point, coordinates program flow
- **Login/** - Handles PIN authentication
- **Menu/** - Displays menu and routes to other modules
- **Balance/** - Balance inquiry functionality
- **Deposit/** - Deposit money functionality
- **Withdrawal/** - Withdraw money functionality
- **Exiting-System/** - Exit functionality

### How They're Connected:
1. main.c includes Login.h and Menu.h
2. Menu.c includes all other module headers
3. Each module has separate .h (interface) and .c (implementation) files

### Compilation:
All .c files must be compiled together:
```bash
gcc main.c Login/Login.c Menu/Menu.c Balance/Balance.c Deposit/Deposit.c Withdrawal/Withdrawal.c Exiting-System/Exiting-System.c -o atm.exe
```
