#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fabs(7.5) << endl;
    cout << floor(7.5) << endl;
    cout << fabs(0.0) << endl;
    cout << ceil(0.0) << endl;
    cout << fabs(-6.4) << endl;
    cout << ceil(-6.4) << endl;
    cout << ceil(fabs(-8)+floor(-5.5));

    return 0;
}