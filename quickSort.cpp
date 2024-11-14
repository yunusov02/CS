#include <iomanip>
#include <iostream>

using namespace std;

void swapp(int *, int *);
void outputArray(int *, const int);
void quickSort(int *, const int);

int main() {
    const int arraySize = 10;
    int array[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};

    cout << "Unsorted Array is: ";
    outputArray(array, arraySize);

    quickSort(array, arraySize);

    cout << "Sorted Array is :";
    outputArray(array, arraySize);

    return 0;
}

void swapp(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void outputArray(int *array, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << array[i];
    }
    cout << endl;
}

void quickSort(int *array, const int size) {}