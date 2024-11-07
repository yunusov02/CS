#include <iostream>

using namespace std;

int nonrecursiveFibanacci(int n);
int recursiveFibanacci(int n);


int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Non recursive Fibanacci: " << nonrecursiveFibanacci(number) << endl;
    cout << "Recursive Fibanacii: " << recursiveFibanacci(number) << endl;
    return 0;
}


int nonrecursiveFibanacci(int number) {

    int first = 0, second = 1;

    int currentNumber = 0;

    for (int i = 0; i < number - 2; i++) {
        int temp = first + second;
        first = second;
        second = temp;
    }

    return second;
}

int recursiveFibanacci(int number) {

    int num1 = 0, num2 = 1;

    if (number <= 3) {
        return 1;
    }

    return recursiveFibanacci(number - 1) + recursiveFibanacci(number - 2);
}
