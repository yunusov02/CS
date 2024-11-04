#include <iostream>
#include <iomanip>



using namespace std;


int main() {

    int sales = 0;
    float res;

    while (1) {
        cout << "Enter sales in dollars (or -1 to quit): ";
        cin >> sales;

        if (sales == -1) {
            break;
        }

        res = 200 + sales * 0.09;
        cout << fixed << setprecision(2); 
        cout << "Salary is: " << res << endl;
        cout << "\n";


    }


    return 0;
}