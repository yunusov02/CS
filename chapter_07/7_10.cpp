#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int calculateSalary(int gross);
void outputSalary(int salesPersons[], int numberSalesPerson);
void outputBarChart(int stars[], int size);


int main() {

    const int numberSalesPerson = 10;

    int salesPersons[numberSalesPerson] =  {
        100, 200, 300, 400, 500, 600, 700, 9000, 12000, 11000
    };

    outputSalary(salesPersons, numberSalesPerson);

    const int starsSize = 9;
    int stars[starsSize] = {};

    int salary = 0;
    int index = 0;
    for (int i = 0; i < numberSalesPerson; i++) {
        
        int salary = calculateSalary(salesPersons[i]);
        int index = (salary / 100) - 2;

        if (index > 8) {
            index = 8;
        }
        
        stars[index] += 1;

    }

    outputBarChart(stars, starsSize);

    return 0;
}


int calculateSalary(int gross) {
    int baseSalary = 200;
    double res = baseSalary + static_cast< int >(0.09 * gross);
    return res;
}


void outputBarChart(int stars[], int size) {
    cout << "\n\nPrint Bar Chart" << endl;

    for (int i = 2; i <= 10; i++) {

        cout << "$" << i * 100 << "-" << i * 100 + 99 << ": ";

        for (int j = 0; j < stars[i-2]; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void outputSalary(int salesPersons[], int numberSalesPerson) {
    for (int i = 1; i <= numberSalesPerson; i++) {
        cout << "Sales Person " << i << " salary: " << calculateSalary(salesPersons[i-1]) << endl;
    }
}
