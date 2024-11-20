#include <iostream>
#include <iomanip>

#include "IntegerSet.h"

using namespace std;


IntegerSet::IntegerSet() {
    for (int i = 0; i < count; i++) {
        array[i] = 0;
    }
}

int IntegerSet::checkNumber(int num) {
    int res = num > 0 && num <= 100 ? 1: 0;
    return res;
}

void IntegerSet::insertElement(int num) {
    if (checkNumber(num) != 1) {
        cout << "Number is not between 1 to 100" << endl;
        return;
    }
    array[num-1] = 1;
}

void IntegerSet::deleteElement(int num) {
    if (checkNumber(num) != 1) {
        cout << "Number is not between 1 to 100" << endl;
        return;
    }
    array[num-1] = 0;
}

void IntegerSet::printArray() {
    for (int i = 0; i < count; i++) {
        if (i % 9 == 0) {
            cout << endl;
        }
        cout << setw(4) << array[i];
    }

}


IntegerSet IntegerSet::unionOffSet(IntegerSet &set) {
    IntegerSet newSet;
    for (int i = 0; i < count; i++) {
        if (array[i] == 1 || set.array[i] == 1) {
            newSet.insertElement(i+1);
        }
    }
    return newSet;
}


IntegerSet IntegerSet::intersectionOffSet(IntegerSet &set) {
    IntegerSet newSet;
    for (int i = 0; i < count; i++) {
        if (array[i] == 1 && set.array[i] == 1) {
            newSet.insertElement(i+1);
        }
    }
    return newSet;
}


IntegerSet IntegerSet::fullOuterJoin(IntegerSet &set) {
    IntegerSet newSet;

    for (int i = 0; i < count; i++) {
        if (array[i] == set.array[i])
            continue;
        newSet.insertElement(i+1);
    }

    return newSet;
}


int IntegerSet::isEqualTo(IntegerSet &newSet) {
    int flag = 1;

    for (int i = 0; i < count; i++) {
        if (array[i] != newSet.array[i]) {
            flag = 0;
            break;
        }
    }

    return flag;
}

int* IntegerSet::getArray() {
    return array;
}