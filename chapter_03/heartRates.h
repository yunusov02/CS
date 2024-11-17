#include <iostream>
#include <string>

using namespace std;

class HeartRates {
   private:
    string firstName;
    string lastName;
    // Date of birth
    int day;
    int month;
    int year;

   public:
    HeartRates(string f_name, string l_name, int d, int m, int y) {
        setFirstName(f_name);
        setLastName(l_name);
        setDateOfBirth(d, m, y);
    }
    void setFirstName(string f_name) { firstName = f_name; }
    void setLastName(string l_name) { lastName = l_name; }
    void setDateOfBirth(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }

    int getYear() { return year; }

    int getmonth() { return year; }

    int getDay() { return day; }

    int getAge() { return 2024 - getYear(); }
    int getMaximumHeartRate() { return 220 * 60 - getYear(); }

    int getTargetHeartRate() {
        int result = getMaximumHeartRate() * 0.6;
        return result;
    }
};
