#include <iostream>

using namespace std;

class Account {
    private:
        int balance;

    public:
        Account(int amount) {
            set_balance(amount);
        }

        void set_balance(int amount) {
            if (amount < 0) {
                cout << "Invalid balance amount" << endl;
                balance = 0;
            } else {
                balance = amount;
            }
        }

        void debit(int amount) {
            if (amount >= 0) {
                balance -= amount;
            } else {
                cout << "Invalid debit amount";
            }
        }

        void credit(int amount) {
            if (amount > balance) {
                cout << "Debit amount exceeded account balance." << endl;
            } else {
                balance += amount;
            }
        }

        int get_balance() {
            return balance;
        }
};