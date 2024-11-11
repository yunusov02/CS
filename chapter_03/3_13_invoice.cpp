#include "3_13_invoice.h"

#include <iostream>
#include <string>

using namespace std;

void is_equal_integers(int a, int b) {
    if (a == b) {
        cout << "OK" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

void is_equal_strings(string a, string b) {
    if (a == b) {
        cout << "OK" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

int main() {
    Invoice invoice("4567", "This is Description", 5, 4);

    string partNumber = "4567";
    string description = "This is Description";

    cout << "Test 1: ";
    is_equal_integers(invoice.get_quantity(), 5);

    cout << "Test 2: ";
    is_equal_integers(invoice.get_price(), 4);

    cout << "Test 3: ";
    is_equal_integers(invoice.getInvoiceAmount(), 20);

    cout << "Test 4: ";
    is_equal_strings(invoice.get_partNumber(), partNumber);

    cout << "Test 5: ";
    is_equal_strings(invoice.get_partDescription(), description);

    return 0;
}