#include <iostream>

using namespace std;

int main() {
    int countOfNumber;
    int sum = 0;
    int currentNumber;

    cout << "Enter how many numbers you want to enter: ";
    cin >> countOfNumber;

    for (int i = 0; i < countOfNumber; i++) {
        cout << "Enter a number: ";
        cin >> currentNumber;
        sum += currentNumber;
    }

    cout << "Sum of " << countOfNumber << " is " << sum << endl;

    return 0;
}