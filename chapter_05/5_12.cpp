#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 10; i >= 1; i--) {
        for (int k = 0; k < 10 - i; k++) {
            cout << "  ";
        }

        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 10; i++) {
        for (int k = 0; k < 10 - i; k++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}