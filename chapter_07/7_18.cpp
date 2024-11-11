#include <iostream>

using namespace std;

int whatIsThis(int array[], int size);

int main() {
    const int arraySize = 10;
    int array[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = whatIsThis(array, arraySize);

    cout << "Result is: " << result << endl;
    return 0;
}

int whatIsThis(int array[], int size) {
    if (size == 0) {
        return 0;
    }

    return array[size - 1] + whatIsThis(array, size - 1);
}