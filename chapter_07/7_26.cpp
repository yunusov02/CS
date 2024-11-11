#include <iostream>

using namespace std;

int main() {
    const int poleSize = 8;

    for (int i = 0; i < poleSize; i++) {
        for (int j = 0; j < poleSize; j++) {
            if (i == 0 || j == 0 || i == j) {
                cout << "* ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }

    return 0;
}