#include <iostream>
#include <string>

using namespace std;

class Employee {
   private:
    string firstName;
    string lastName;
    int salary;

   public:
    Employee(string f_name, string l_name, int monthly_salary) {
        setFirstName(f_name);
        setLastName(l_name);
        setSalary(monthly_salary);
    }

    void setFirstName(string f_name) { firstName = f_name; }
    void setLastName(string l_name) { lastName = l_name; }
    void setSalary(int monthly_salary) {
        if (monthly_salary < 0) {
            salary = 0;
        } else {
            salary = monthly_salary;
        }
    }

    string getFirstName() { return firstName; }
    string getLastname() { return lastName; }
    int getSalary() { return salary; }
    int yearlySalary() { return salary * 12; }
};