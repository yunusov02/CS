#include <iostream>

using namespace std;

const int poleSize = 8;

int main() {
    int pole[poleSize][poleSize] = {};

    int x, y;
    cout << "Enter a coordindate: ";
    cin >> x >> y;

    int counter = 0;
    for (int i = 0; i < poleSize; i++) {
        for (int j = 0; j < poleSize; j++) {
            if (i == x && j == y) {
                cout << "K ";
            } else if (((x + 2 == i || x - 2 == i) && (y + 1 == j || y - 1 == j)) ||
                       ((x - 1 == i || x + 1 == i) && (y - 2 == j || y + 2 == j))) {
                cout << counter << " ";
                counter += 1;
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}