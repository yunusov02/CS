#include <iostream>
#include <string>

#include "heartRates.h"

using namespace std;

void is_equal_integers(int a, int b) { cout << (a == b) ? "OK\n" : "FAIL\n"; }

void is_equal_strings(string a, string b) { cout << (a == b) ? "OK\n" : "FAIL\n"; }

int main() {
    HeartRates heartRates("John", "Doe", 12, 10, 1990);

    cout << "Test 1: ";
    is_equal_strings(heartRates.getFirstName(), "John");

    cout << "Test 2: ";
    is_equal_strings(heartRates.getLastName(), "Doe");

    cout << "Test 3: ";
    is_equal_integers(heartRates.getAge(), 34);

    cout << "Test 4: ";
    int res = 220 * 60 - heartRates.getYear();
    is_equal_integers(heartRates.getMaximumHeartRate(), res);

    cout << "Test 5: ";
    is_equal_integers(heartRates.getTargetHeartRate(), res * 0.6);

    return 0;
}
