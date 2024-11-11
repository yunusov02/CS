#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int numberOfSalesPeople = 4;
    const int countProduct = 5;

    int array[numberOfSalesPeople][countProduct] = {{7500, 4600, 3200, 4300, 9400},
                                                    {3600, 2100, 5600, 3400, 5600},
                                                    {12000, 23000, 4500, 4300, 200},
                                                    {9000, 7000, 6000, 5000, 4000}};

    int totalByProduct[countProduct] = {};

    int all_total = 0;

    cout << "Person" << setw(8) << "1" << setw(6) << "2" << setw(6) << "3" << setw(6) << "4" << setw(6) << "5"
         << setw(10) << "Total" << endl;
    cout << "------------------------------------------------" << endl;

    for (int i = 0; i < numberOfSalesPeople; i++) {
        cout << "Person " << i + 1;

        int total = 0;
        for (int j = 0; j < countProduct; j++) {
            cout << setw(6) << array[i][j];
            total += array[i][j];
        }

        all_total += total;
        cout << setw(10) << total << endl;
    }

    cout << "------------------------------------------------" << endl;

    for (int i = 0; i < countProduct; i++) {
        int productSum = 0;
        for (int j = 0; j < numberOfSalesPeople; j++) {
            productSum += array[j][i];
        }
        totalByProduct[i] = productSum;
    }

    cout << "Total:  ";
    for (int i = 0; i < countProduct; i++) {
        cout << setw(6) << totalByProduct[i];
    }
    cout << setw(10) << all_total << endl;

    return 0;
}