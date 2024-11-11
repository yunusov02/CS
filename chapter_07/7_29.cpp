#include <iomanip>
#include <iostream>

using namespace std;

int primeNumber(int number);

int main() {
    int arraySize = 100;
    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        array[i] = i + 1;
    }

    for (int i = 1; i < arraySize - 1; i++) {
        if (array[i] == 0) continue;

        for (int j = 1 + array[i]; j < arraySize; j += array[i]) {
            array[j] = 0;
        }
    }

    for (int i = 0; i < arraySize; i++) {
        cout << setw(4) << array[i];
        if (i % 10 == 9) {
            cout << endl;
        }
    }

    return 0;
}

int primeNumber(int number) {
    int flag = 1;  // is Prime Number
    for (int i = 2; i < number / 2; i++) {
        if (number % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}
