#include <iostream>

using namespace std;

int main() {
    int firstLargest = 0;
    int secondLargest = 0;
    int currentNumber = 0;

    int i = 0;

    while (i < 10) {
        cout << "Enter a number: ";
        cin >> currentNumber;

        if (currentNumber > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = currentNumber;
        } else if (currentNumber > secondLargest) {
            secondLargest = currentNumber;
        }

        i += 1;
    }

    cout << "First Largest Number: " << firstLargest << endl;
    cout << "Second Largest Number: " << secondLargest << endl;

    return 0;
}
