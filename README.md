# ATM System (C++)

A console-based ATM simulation built in C++ while learning core programming concepts like loops, conditionals, and basic system design.

## Features

* Account number + PIN authentication (with limited attempts)
* Check balance
* Deposit money (updates balance)
* Withdraw money (with validation)
* Loop-based menu system (multiple operations)
* Exit and continue options

## Improvements from V1

* Replaced name-based login with account number + PIN
* Added retry limit for authentication (basic security)
* Implemented loop-based menu (no longer single-run)
* Fixed balance logic (now updates correctly)
* Added input validation for withdrawals

## Tech Used

* C++

## How To Run

```bash
g++ main.cpp -o atm
./atm
```

## Current Limitations

* Data is not stored (resets after program ends)
* Account details are hardcoded
* No file/database integration
* Limited input validation (non-numeric input not handled)

## Status

Work in progress

Next improvements:

* Add functions for better structure
* Improve input validation
* Store data using files
* Enhance UI/UX of console output

