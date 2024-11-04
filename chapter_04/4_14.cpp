#include <iostream>
 
using namespace std;

int main() {
    int accountNumber = 0;
    float beginning_balance = 0;
    float charges = 0;
    float credits = 0;
    float allowedCreditLimit = 0;
    float newBalance = 0;

    while (1) {
        cout << "Enter account number (or -1 to quit): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> beginning_balance;

        cout << "Enter total charges: ";
        cin >> charges;

        cout << "Enter total credits: ";
        cin >> credits;

        cout << "Enter credit limit: ";
        cin >> allowedCreditLimit;

        newBalance = beginning_balance + charges - credits;

        if (newBalance > allowedCreditLimit) {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Credit Limit: " << allowedCreditLimit << endl;
            cout << "New Balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded." << endl;
            cout << "-----------------------------------" << endl;
        } else {
            cout << "Account Number: " << accountNumber << endl;
            cout << "New Balance: " << newBalance << endl;
            cout << "Credit Limit Not Exceeded." << endl;
            cout << "-----------------------------------" << endl;
        }

    }

    return 0;
}
