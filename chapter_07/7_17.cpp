#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

void outputArray(int array[], int size);

int main() {

    const int length = 6;

    int array[length * length] = {};
    int guessNumber = 1 + rand() % 10;

    for (int i = 0; i < length * length; i++) {

        int someValue = guessNumber + i % 6;
        array[i] = someValue;
        
        if (i % 6 == 5) {
            guessNumber += 1;
        }

        
    }

    outputArray(array, length);

    return 0;
}



void outputArray(int array[], int size) {
    for (int i = 0; i < size * size; i++) {
        cout << setw(2) << array[i] << " ";
        if (i % 6 == 5) {
            cout << endl;
        }
    }
    // 
}