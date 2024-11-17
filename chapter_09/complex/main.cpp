#include <iostream>

#include "Complex.h"

using namespace std;

int main() {

    Complex com1(2, -3);
    Complex com2(3, 5);
    Complex com3;

    cout << "Test 1: ";
    cout << (com1.getRealPart() == 2.0 && com1.getImaginaryPart() == -3.0 ? "OK": "FAIL");
    cout << endl;

    com1.add(com2);
    cout << "Test 2: ";
    cout << (com1.getRealPart() == 5.0 && com1.getImaginaryPart() ==2.0 ? "OK": "FAIL");
    cout << endl;

    com1.subtract(com3);
    cout << "Test 3: ";
    cout << (com1.getRealPart() == 4.0 && com1.getImaginaryPart() ==1.0 ? "OK": "FAIL");
    cout << endl;
    
    return 0;
}