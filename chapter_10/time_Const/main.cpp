#include <iostream>
#include <iomanip>

#include "Time.h"

using namespace std;

int main() {

    Time wakeUp(6, 45, 0);
    const Time noon(12, 0, 0);


    wakeUp.printStandard();
    wakeUp.setHour(15);
    cout << endl;
    wakeUp.printStandard();

    // noon.getHour(); it is ok
    // noon.setHour(12) this is not ok because we don't need to modify data


    return 0;
}