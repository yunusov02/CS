#include <iostream>
#include <string>
#include "3_12_account.h"

using namespace std;

void is_equal_value(int a, int b) {
    if (a == b) {
        cout << "OK" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}


int main() {
    Account account(100);
    
    cout << "Test 1: ";
    is_equal_value(account.get_balance(), 100);

    cout << "Test 2: ";
    account.credit(50);
    is_equal_value(account.get_balance(), 150);

    cout << "Test 3: ";
    account.debit(20);
    is_equal_value(account.get_balance(), 130);

    return 0;
}
