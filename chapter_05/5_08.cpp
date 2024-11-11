#include <iostream>

using namespace std;

int main() {
    int countOfNumber;
    int smallestValue = 0;
    int currentNumber;

    cout << "How many values you want to enter: ";
    cin >> countOfNumber;

    cout << "Enter a number: ";
    cin >> smallestValue;

    for (int i = 0; i < countOfNumber - 1; i++) {
        cout << "Enter a number: ";
        cin >> currentNumber;

        if (smallestValue > currentNumber) {
            smallestValue = currentNumber;
        }
    }

    cout << "Smallest value is " << smallestValue << endl;

    return 0;
}