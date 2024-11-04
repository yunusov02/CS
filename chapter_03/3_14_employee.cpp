#include "iostream"
#include "string"

#include "3_14_employee.h"

using namespace std;

void is_equal_integers(int a, int b) {
    string result = (a == b) ? "OK\n" : "FAIL\n";
    cout << result;
}

void is_equal_strings(string a, string b) {
    string result = (a == b) ? "OK\n" : "FAIL\n";
    cout << result;
}

int main() {
    Employee employee("John", "Doe", 12000);

    cout << "Test 1: ";
    is_equal_strings(employee.getFirstName(), "John");

    cout << "Test 2: ";
    is_equal_strings(employee.getLastname(), "Doe");

    cout << "Test 3: ";
    is_equal_integers(employee.getSalary(), 12000);

    cout << "Test 4: ";
    is_equal_integers(employee.yearlySalary(), 14000);
    
    return 0;
}