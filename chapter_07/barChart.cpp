#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int arraySize = 11;

    int n[arraySize] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Grade distribution:" << endl;

    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            cout << " 0-9: ";
        } else if (i == 10) {
            cout << "  100: ";
        } else {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }

        for (int stars = 0; stars < n[i]; stars++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}