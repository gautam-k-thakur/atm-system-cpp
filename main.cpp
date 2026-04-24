#include <iostream>
using namespace std;

int main() {
    
    // ===== AUTHENTICATION DATA =====
    string name{"Gautam Kumar Thakur"};
    long long account_no;
    int pin;

    cout << "--------Unknown Bank Handle Portal--------\n\n";

    // ===== LOGIN ATTEMPTS =====
    int attempts{1};

    while (attempts <= 3) {
        cout << "Enter Your Account Number: ";
        cin >> account_no;

        cout << "Enter Your PIN: ";
        cin >> pin;

        // Check credentials
        if (account_no == 1234567890 && pin == 1234) {
            cout << "Welcome Master " << name << '\n';
            break;
        } 
        else {
            cout << "Wrong Input, Please Try Again!\n";
            attempts++;
        }
    }

    // ===== LOGIN FAILURE =====
    if (attempts > 3) {
        cout << "Too Many Wrong Attempts, Please Try Again Later!\n";
    }
    else {

        // ===== ATM VARIABLES =====
        int amount;
        int Balance = 6000;
        int options;

        // ===== MAIN MENU LOOP =====
        while (true) {

            cout << "\nMenu:\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";

            cout << "Choose Your Option:\n";
            cin >> options;

            // Exit option
            if (options == 4) {
                cout << "Thankyou For Using Our Services!\n";
                break;
            }

            // ===== MENU HANDLING =====
            switch (options) {

                case 1:
                    // Check balance
                    cout << "Your Balance: " << Balance << '\n';
                    break;

                case 2:
                    // Deposit money
                    cout << "Enter Amount To Deposit:\n";
                    cin >> amount;

                    Balance += amount;
                    cout << "Your New Balance: $" << Balance << '\n';
                    break;

                case 3:
                    // Withdraw money
                    cout << "Enter Amount To Withdraw:\n";
                    cin >> amount;

                    if (amount > 0 && amount <= Balance) {
                        Balance -= amount;
                        cout << "Your New Balance: $" << Balance << '\n';
                    }
                    else if (amount > Balance) {
                        cout << "Insufficient Balance!\n";
                    }
                    else {
                        cout << "Invalid Input!\n";
                    }
                    break;

                default:
                    cout << "INVALID OPTION!\n";
            }

            // ===== CONTINUE OPTION =====
            char choice;

            cout << "Do You Want To Continue(Y/N): ";
            cin >> choice;

            if (choice == 'N' || choice == 'n') {
                cout << "Thankyou For Using Our Services!\n";
                break;
            }
            else if (choice == 'Y' || choice == 'y') {
                // continue loop
            }
            else {
                cout << "Invalid Choice\n";
                break;
            }
        }
    }
    
    return 0;
}