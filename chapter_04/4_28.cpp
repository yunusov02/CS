#include <iostream>

using namespace std;

int main () {

    int i = 0;

    while (i < 8) {
        if (i % 2 != 0) {
            cout << " ";
        }

        int j = 0;
        while (j < 8) {
            cout << "* ";
            j += 1;
        }

        cout << endl;
        i += 1;
    }

    return 0;
}