#include <iostream>
#include <iomanip>

using namespace std;

void swapp(int *, int *);
void outputArray(int *, const int);
void insertionSort(int *, const int);

int main() {

    const int arraySize = 10;
    int array[arraySize] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

    cout << "Unsorted Array is: ";
    outputArray(array, arraySize);

    insertionSort(array, arraySize);

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

void insertionSort(int *array, const int size) {
    for (int i = 1; i < size - 1; i++) {
        int insert = array[i];
        int moveItem = i;

        while (moveItem > 0 && array[moveItem - 1] > insert) {
            array[moveItem] = array[moveItem - 1];
            moveItem--;
        }
        
        array[moveItem] = insert;
    }
}