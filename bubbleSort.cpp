#include <iostream>
#include <iomanip>

using namespace std;


void outputArray(int *, const int);
void bubbleSort(int *, const int);

int main() {

    const int arraySize = 10;
    int array[arraySize] = {37, 2, 6, 4, 89, 8, 10, 12, 68, 45};

    cout << "Unsorted array is: ";
    outputArray(array, arraySize);

    bubbleSort(array, arraySize);
    
    cout << "Sorted array is: ";
    outputArray(array, arraySize);
    return 0;
}

void outputArray(int *array, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(3) << array[i];
    }
    cout << endl;
}

void bubbleSort(int *array, const int size) {
    for (int i = 0; i < size - 1; i++) {

        bool swapped = false;

        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;

                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }
}

