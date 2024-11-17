#include <iostream>

#include "Rational.h"

using namespace std;

int main() {

    Rational rat;
    
    cout << "Test 1: ";
    cout << (rat.getNumerator() == 1 && rat.getDonominator() == 1 ? "OK" : "FAIL");
    cout << endl;
    
    Rational rat1(3, 4);
    Rational rat2(25, 75);

    cout << "Test 2: ";
    cout << (rat2.getNumerator() == 1 && rat2.getDonominator() == 3 ? "OK": "FAIL");
    cout << endl;

    rat1.add(rat2);
    cout << "Test 3: ";
    cout << (rat1.getNumerator() == 13 && rat1.getDonominator() == 12 ? "OK": "FAIL");
    cout << endl;

    Rational rat3(2, 5);
    Rational rat4(2, 5);
    
    rat3.subtract(rat4);
    cout << "Test 4: ";
    cout << (rat3.getNumerator() == 0 && rat3.getDonominator() == 25 ? "OK": "FAIL");
    cout << endl;
    
    return 0;
}