#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    float balance = 1000.0;
    float amount;
    bool loggedIn = false;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter ATM PIN: ";
        cin >> pin;
        if (pin == 1234) {
            cout << "Login Successful" << endl;
            loggedIn = true;
            break;
        } else {
            cout << "Wrong PIN" << endl;
        }
        if (i == 3) {
            cout << "Too many attempts. Card Blocked." << endl;
            return 0;
        }
    }

    while (loggedIn) {
        cout << endl << "ATM MENU" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: " << balance << endl;
        } else if (choice == 2) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Money Deposited Successfully" << endl;
        } else if (choice == 3) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance = balance - amount;
                cout << "Please collect your cash" << endl;
            } else {
                cout << "Insufficient Balance" << endl;
            }
        } else if (choice == 4) {
            cout << "Thank you for using ATM" << endl;
            break;
        } else {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}