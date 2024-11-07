#include <iostream>

using namespace std;

int prime(int number);

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (prime(number) == 1) {
        cout << "OK" << endl;
    } else {
        cout << "FAIL" << endl;
    }
    return 0;
}

int prime(int number) {
    int flag = 1;

    for (int i = 2; i < number / 2; i++) {
        if (number % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}
