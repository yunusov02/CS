#include <iostream>

#include "Employee.h"
#include "Date.h"

using namespace std;

Employee::Employee(const string &first, const string &last, const Date &dateOfBirth, const Date &dateOfHire)
    : FirstName( first),
    LastName(last),
    birthDate(dateOfBirth),
    hireDate(dateOfHire) {

        cout << "Employee object constructor: "
        << FirstName << " " << LastName << endl;
    }


void Employee::print() const {
    cout << LastName << ", " << FirstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Employee object destructor: "
    << LastName << ", " << FirstName << endl;
}
