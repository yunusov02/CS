#include <iostream>

using namespace std;

int main() {
    int number, a, b, c, d, e;
    cout << "Enter a number: ";
    cin >> number;

    a = number % 10;
    b = (number % 100 - a) / 10;
    c = (number % 1000 - 10 * b - a) / 100;
    d = (number % 10000 - 100 * c - 10 * b - a) / 1000;
    e = (number % 100000 - 1000* d - 100 * c - 10 * b - a) / 10000;

    if (a == e && b == d) {
        cout << "Palinrdome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }



    return 0;
}