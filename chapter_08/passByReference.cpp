//    Pass by Value

/*

#include <iostream>

using namespace std;

int cubeByValue( int );

int main() {
    int number = 5;
    cout << "The original value of number is " << number << endl;

    number = cubeByValue(number);
    cout << "The new value of number is " << number << endl;

    return 0;
}


int cubeByValue(int number) {
    return number * number * number;
}

*/

#include <iostream>

using namespace std;

void cubeByReference(int *);

int main() {
    int number = 5;
    cout << "The original value of number is " << number;
    cubeByReference(&number);
    cout << "\nThe new value of number is " << number << endl;
    return 0;
}

void cubeByReference(int *number) { *number = *number * *number * *number; }