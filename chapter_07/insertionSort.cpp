#include <iostream>

using namespace std;

void output(int [], const int);

int main () {

    const int arraySize = 10;
    int array[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int currentValue;

    cout << "Unsorted Array: ";
    output(array, arraySize);

    for (int i = 1; i < arraySize; i++) {
        
        currentValue = array[i];
        int index = i;

        while ( ( index > 0 ) && ( array[ index - 1 ] > currentValue ) ) {
            array[ index ] = array[ index - 1 ];
            index--;
        }
        
        array[index] = currentValue;

    }

    cout << "Sorted Array: ";
    output(array, arraySize);

    return 0;
}

void output(int array[], const int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
}