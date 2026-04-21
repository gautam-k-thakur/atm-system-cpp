#include <iostream>
using namespace std;

int main() {

    // ====== USER INPUT SECTION ======
    string name;

    cout << "-----Unknown Bank Handle Portal-----\n";
    cout << "Please Enter Account Holder's Name:\n";

    // Using getline to allow full name (with spaces)
    getline(cin, name);

    // ====== AUTHENTICATION CHECK ======
    // NOTE: Exact match required (case-sensitive)
    if (name == "Gautam Kumar Thakur") {
        cout << "Welcome Master " << name << endl;
    } 
    else {
        cout << "User Not Found, Please Try Again!\n";

        cout << "Please Enter Account Holder's Name:\n";
        getline(cin, name);

        // ⚠️ Temporary logic:
        // Second input is accepted without validation
        cout << "Welcome Master " << name << endl;
    }

    // ====== ATM MENU ======
    int options;
    int amount;
    int Balance = 6000;  // Initial balance (hardcoded)

    cout << "\nMenu:\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "Choose Your Option:\n";
    cin >> options;

    // ====== MENU HANDLING ======
    switch(options) {

        // ====== CHECK BALANCE ======
        case 1:
            // ⚠️ Currently prints fixed value instead of updated balance
            cout << "Your Balance: $6000\n";
            break;

        // ====== DEPOSIT ======
        case 2:
            cout << "Enter Amount To Deposit:\n";
            cin >> amount;

            // ⚠️ Balance not updated, only calculated
            cout << "Your New Balance: $" << Balance + amount << endl;
            break;

        // ====== WITHDRAW ======
        case 3: {
            cout << "Enter Amount To Withdraw:\n";
            cin >> amount;

            // Basic validation checks
            if (amount < Balance && amount > 0) {
                // ⚠️ Balance not updated, only calculated
                cout << "Your New Balance: $" << Balance - amount << endl;
            }
            else if (amount > Balance) {
                cout << "Insufficient Balance!\n";
            }
            else {
                cout << "Invalid Input!\n";
            }
        }
        break;

        // ====== EXIT ======
        case 4:
            cout << "Thankyou For Using Our Services!\n";
            break;

        // ====== INVALID INPUT ======
        default:
            cout << "INVALID OPTION!\n";
    }

    return 0;
}