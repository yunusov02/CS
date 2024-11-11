#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int hours = 0;
    float payPerHour = 0;
    float salary = 0;

    while (1) {
        cout << "Enter worked hours: ";
        cin >> hours;

        if (hours == -1) {
            break;
        }

        cout << "Enter hourly rate of the employee: ";
        cin >> payPerHour;

        if (hours <= 40) {
            salary = hours * payPerHour;
        } else {
            salary = payPerHour * 40 + (hours - 40) * 1.5 * payPerHour;
        }

        cout << fixed << setprecision(2);
        cout << "Salary is $" << salary << endl;
    }

    return 0;
}
