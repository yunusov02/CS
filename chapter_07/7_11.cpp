#include <iostream>

using namespace std;

void outputArray(int array[], int size);

int main() {

    const int length = 10;
    int array[length] = {5, 2, 7, 3, 91, 23, 32, 1, 45, 4};

    cout << "Unsorted Array: ";
    outputArray(array, length);

    int swapped;

    for (int i = 0; i < length-1; i++) {
        swapped = 0;

        for (int j = 0; j < length - i - 1; j++) {
        
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                swapped = 1;
            }
        
        }

        if (swapped == 0) {
            break;
        }
    }

    cout << "Sorted Array: ";
    outputArray(array, length);

    return 0;
}

void outputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}