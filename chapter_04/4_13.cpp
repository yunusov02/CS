#include <iostream>
#include <string>

using namespace std;


int main() {

    int total_miles = 0;
    int total_gasballons = 0;

    int miles;
    int gasballons;

    while (1) {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;

        if (miles == -1) {
            break;
        }
        cout << "Enter gallons used: ";
        cin >> gasballons;
        
        total_miles += miles;
        total_gasballons += gasballons;

        float this_mpg = (float)miles / gasballons;
        float total_mpg = (float)total_miles / total_gasballons;

        cout << "MPG this tankful: " << this_mpg << endl;
        cout << "Total MPG: " << total_mpg << endl;
        cout << "\n";

    }

    return 0;

}