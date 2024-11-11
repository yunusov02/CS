#include <iostream>

using namespace std;

int isPerfect(int number);

int main() {
    int perfectNumber;

    cout << "Enter a number: ";
    cin >> perfectNumber;

    if (isPerfect(perfectNumber) == 1) {
        cout << perfectNumber << " is perfect" << endl;
    } else {
        cout << perfectNumber << " is not perfect" << endl;
    }

    return 0;
}

int isPerfect(int number) {
    int sum = 0;

    for (int i = 1; i < number / 2 + 1; i++) {
        if (number % i == 0) {
            sum += i;
            cout << sum << " " << i << endl;
        }
    }

    int res = number == sum ? 1 : 0;

    return res;
}