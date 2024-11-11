#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c;

    cout << "Sum is " << a + b + c << endl;
    cout << "Average is " << (a + b + c) / 3 << endl;
    cout << "Product is " << a * b * c << endl;

    int smallest, largest;

    if (a > b)
        if (a > c)
            largest = a;
        else
            largest = c;
    if (b > a)
        if (b > c)
            largest = b;
        else
            largest = c;
    if (c > a)
        if (c > b)
            largest = c;
        else
            largest = b;

    if (a < b)
        if (a < c)
            smallest = a;
        else
            smallest = c;
    if (b < a)
        if (b < c)
            smallest = b;
        else
            smallest = c;
    if (c < a)
        if (c < b)
            smallest = c;
        else
            smallest = b;

    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}