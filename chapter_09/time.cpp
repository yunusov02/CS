#include "Time.h"

#include <iostream>

using namespace std;

int main() {
    Time t;

    cout << "The initial universal time is: ";
    t.printUniversal();
    cout << "\nThe initial standart time is: ";
    t.printStandard();

    t.setTime(13, 27, 6);

    cout << "\n\nUniversal time after setTime is: ";
    t.printUniversal();
    cout << "\nStandart time after setTime is: ";
    t.printStandard();

    t.setTime(99, 99, 99);

    cout << "\n\nAfter attempting invalid settings:" << "\nUniversal time: ";
    t.printUniversal();  // 00:00:00
    cout << "\nStandard time: ";
    t.printStandard();  // 12:00:00 AM
    cout << endl;

    return 0;
}