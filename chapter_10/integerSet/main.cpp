#include <iostream>
#include <iomanip>

#include "IntegerSet.h"

using namespace std;

void checkArrays(int array1[], int array2[], int size);
void arrayInsertElements(IntegerSet &set, int values[], int size);

int main() {

    // TEST 1;
    IntegerSet integers;

    const int sizeOfArray = 7;
    int values[sizeOfArray] = {3, 8, 12, 45, 34, 67, 78};

    int arrayForRightElements[100] = {};
    for (int i = 0; i < sizeOfArray; i++) {
        arrayForRightElements[ values[i] - 1 ] = 1;
        integers.insertElement(values[i]);
    }

    cout << "Test 1: ";
    checkArrays(integers.getArray(), arrayForRightElements, 100);


    // TEST 2;
    const int isEqualToTestSize = 4;
    int isEqaulToTestArray[isEqualToTestSize] = {4, 10, 5, 2};
    IntegerSet set1;
    IntegerSet set2;

    for (int i = 0; i < isEqualToTestSize; i++) {
        set1.insertElement(isEqaulToTestArray[i]);
        set2.insertElement(isEqaulToTestArray[i]);
    }

    int flag = set1.isEqualTo(set2);
    cout << "Test 2: ";
    cout << (flag == 1 ? "OK": "FAIL");
    cout << endl;

    // TEST 3;
    


    return 0;
}



void checkArrays(int array1[], int array2[], int size) {
    for (int i = 0; i < size; i++) {
        if (array1[i] != array2[i]) {
            cout << "FAIL" << endl;
            return;
        }
    }
    cout << "OK" << endl;
}

void arrayInsertElements(IntegerSet &set, int values[], int size) {
    for (int i = 0; i < size; i++) {
        set.insertElement(values[i]);
    }
}
