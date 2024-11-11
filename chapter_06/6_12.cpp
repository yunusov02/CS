#include <iomanip>
#include <iostream>

using namespace std;

float calculatePrintCharges(int counter, float hours);

int main() {
    float hoursFirstCar, hoursSecondCar, hoursThirdCar;
    float chargesFirstCar = 0, chargesSecondCar = 0, chargesThirdCar = 0;

    cout << "Enter hours: ";
    cin >> hoursFirstCar >> hoursSecondCar >> hoursThirdCar;

    cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;

    chargesFirstCar = calculatePrintCharges(1, hoursFirstCar);
    chargesSecondCar = calculatePrintCharges(2, hoursSecondCar);
    chargesThirdCar = calculatePrintCharges(3, hoursThirdCar);

    float totalHours = hoursFirstCar + hoursSecondCar + hoursThirdCar;
    float totalCharges = chargesFirstCar + chargesSecondCar + chargesThirdCar;

    cout << "TOTAL" << setw(10) << totalHours << setw(10) << totalCharges << endl;

    return 0;
}

float calculatePrintCharges(int counter, float hours) {
    float charges = 0;

    if (hours <= 3) {
        charges = 2.0;
    } else if (hours > 3 && hours < 24) {
        charges = 2.0 + (hours - 3) * 0.5;
    } else {
        charges = 10.0 + (hours - 24) * 0.5;
    }

    cout << counter << setw(10) << hours << setw(10) << charges << endl;

    return charges;
}
