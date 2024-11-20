#include <iomanip>
#include <iostream>

using namespace std;

class SavingAccount {
   private:
    double savingBalance;

    static double annualInterestRate;

   public:
    SavingAccount(double balance) : savingBalance(balance){};

    void calculateMonthlyInterest() {
        double monthlyInterst = (savingBalance * annualInterestRate) / 12;
        savingBalance += monthlyInterst;
    }

    static void modifyInterestRate(double newRate) { annualInterestRate = newRate; }

    double getBalance() const { return savingBalance; }
};

double SavingAccount::annualInterestRate = 0.04;

int main() {
    SavingAccount saver1(2000.00);
    SavingAccount saver2(3000.00);

    SavingAccount::modifyInterestRate(0.03);

    cout << "Annual Interest Rate: 3%" << endl;

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << fixed << setprecision(2);
    cout << "Saver 1 Balance after 1 month: $" << saver1.getBalance() << endl;
    cout << "Saver 2 Balance after 1 month: $" << saver2.getBalance() << endl;

    return 0;
}