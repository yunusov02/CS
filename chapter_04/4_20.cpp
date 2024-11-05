#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int hours = 0;
    float payPerHour = 0;
    float salary = 0;

    int flag = 1;

    while (flag) {
        int isCorrectHours = 1;
        
        while (isCorrectHours) {
            cout << "Enter worked hours: ";
            cin >> hours;

            if (hours != 1 && hours != 2) {
                isCorrectHours = 0;
            }
        }


        if (hours == -1) {
                flag = 0;
        } else {
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
    }
    return 0;
}
