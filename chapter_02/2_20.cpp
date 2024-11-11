#include <iostream>

using namespace std;

int main() {
    float pi;
    pi = 3.141516;

    int radius;
    cout << "Enter a radius of cirlce: ";
    cin >> radius;

    cout << "Diameter is equal: " << radius * 2 << endl;
    cout << "Circumference is equal: " << 2 * pi * radius << endl;
    cout << "Area is equal: " << pi * radius * radius << endl;

    return 0;
}