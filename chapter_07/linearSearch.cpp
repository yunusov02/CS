#include <iostream>

using namespace std;

int linearSearch(const int[], int, int);

int main() {
    const int arraySize = 100;
    int a[arraySize];
    int searchKey;

    for (int i = 0; i < arraySize; i++) {
        a[i] = i * i;
    }

    cout << "Enter integer search key: ";
    cin >> searchKey;

    int element = linearSearch(a, searchKey, arraySize);

    if (element != -1) {
        cout << "Found value in element " << element << endl;
    } else {
        cout << "Value not found" << endl;
    }

    return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
        if (array[i] == key) {
            return i;
        }
    }

    return -1;
}
