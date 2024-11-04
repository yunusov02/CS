#include <iostream>

using namespace std;

int main() {

    int weight, height;
    
    cout << "Enter a weight: ";
    cin >> weight;

    cout << "Enter a height: ";
    cin >> height;

    int bmi = (weight * 703) / (height * height);

    if (bmi <= 18.5)
        cout << "Underweight\n";
    else if (bmi > 18.5 && bmi <= 24.9) 
        cout << "Normal\n";
    else if (bmi > 24.9 && bmi <= 29.9)
        cout << "Overweight\n";
    else
        cout << "Obese";
    return 0;
}
