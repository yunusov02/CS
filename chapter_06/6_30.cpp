#include <cmath>
#include <iostream>

using namespace std;

int findPower(int number);
int reverse(int number);

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << reverse(number) << endl;
    return 0;
}

int reverse(int number) {
    int reversedNumber = 0;
    int power = findPower(number);
    int reminder = 0;

    while (number > 0) {
        reminder = number % 10;
        reversedNumber += reminder * pow(10, power);
        number /= 10;
        power -= 1;
    }

    return reversedNumber;
}

int findPower(int number) {
    int power = 0;

    while (number > 0) {
        power += 1;
        number /= 10;
    }

    return power - 1;
}
