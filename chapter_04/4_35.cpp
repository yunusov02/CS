#include <cmath>
#include <iostream>

using namespace std;

int makingNumber(int a, int b, int c, int d) { return 1000 * a + 100 * b + 10 * c + d; }

void encrypt(int a, int b, int c, int d) {
    int x, y, z, t;

    x = (a + 7) % 10;
    y = (b + 7) % 10;
    z = (c + 7) % 10;
    t = (d + 7) % 10;

    cout << makingNumber(z, t, x, y) << endl;
}

void decrypt(int a, int b, int c, int d) {
    int x, y, z, t;

    x = (a + 3) % 10;
    y = (b + 3) % 10;
    z = (c + 3) % 10;
    t = (d + 3) % 10;

    cout << makingNumber(x, y, z, t) << endl;
}

int main() {
    int number;
    int option;

    cout << "Enter a number you want: ";
    cin >> number;

    int a, b, c, d;

    d = (number / 1000) % 10;
    c = (number / 100) % 10;
    b = (number / 10) % 10;
    a = number % 10;

    cout << "Enter an option you want\n\t1. Encrypt\n\t2. Decrypt: ";
    cin >> option;

    if (option == 1) {
        encrypt(d, c, b, a);
    } else {
        decrypt(b, a, d, c);
    }
    return 0;
}
