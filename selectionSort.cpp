#include <iomanip>
#include <iostream>

using namespace std;

void selectionSort(int *, const int);
void outputArray(int *, const int);
void swapp(int *, int *);

int main() {
    const int arraySize = 10;
    int array[arraySize] = {37, 2, 6, 4, 89, 8, 10, 12, 68, 45};

    cout << "Unsorted array is: ";
    outputArray(array, arraySize);

    selectionSort(array, arraySize);

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

void swapp(int *const num1, int *const num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int *array, const int size) {
    int smallest;

    for (int i = 0; i < size - 1; i++) {
        smallest = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[smallest]) {
                smallest = j;
            }
        }

        swapp(&array[i], &array[smallest]);
    }
}
