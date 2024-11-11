#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && b + c > a && a + c > b) {
        cout << "OK" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}