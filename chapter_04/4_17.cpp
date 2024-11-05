#include <iostream>

using namespace std;


int main() {
    int largest = 0;
    int number = 0;
    int i = 0;

    while (i < 10) {
        cout << "Enter a number: ";
        cin >> number;

        if (number > largest) {
            largest = number;
        }

        i += 1;
    }

    cout << "Largset number is: " << largest << endl;
    return 0;
}