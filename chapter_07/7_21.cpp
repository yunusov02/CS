#include <iostream>

using namespace std;

void someFunction(int[], int, int);

int main() {
    const int arraySize = 10;
    int array[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The values of the array are: " << endl;
    someFunction(array, 0, arraySize);
    cout << endl;

    return 0;
}

void someFunction(int array[], int current, int size) {
    if (current < size) {
        someFunction(array, current + 1, size);
        cout << array[current] << " ";
    }
}
