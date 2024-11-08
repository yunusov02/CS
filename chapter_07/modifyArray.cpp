#include <iostream>
#include <iomanip>

using namespace std;

void modifyArray(int array[], int size);
void modifyElement(int element);

int main() {

    const int arraySize = 5;
    int array[arraySize] = {0, 1, 2, 3, 4};

    cout << "Effects of passing entire array by reference:" << "\n\nThe values of the original array are:\n";
    
    for (int i = 0; i < arraySize; i++) {
        cout << setw(3) << array[i];
    }

    cout << endl;

    modifyArray(array, arraySize);
    cout << "The values of the modified array are:\n";

    for (int j = 0; j < arraySize; j++) {
        cout << setw(3) << array[j];
    }

    cout << "\n\nEffects of passing array element by value:" << "\n\na[3] before modifyElement: " << array[3] << endl;
    
    modifyElement(array[3]);
    cout << "a[3] after modifiyElement: " << array[3] << endl;

    return 0;
}

void modifyArray( int b[], int sizeOfArray ) {
    for ( int k = 0; k < sizeOfArray; k++ )
    b[ k ] *= 2;
}

void modifyElement( int e ) {
    cout << "Value of element in modifyElement: " << ( e *= 2 ) << endl;
}

