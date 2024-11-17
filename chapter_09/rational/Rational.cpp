#include <iostream>
#include <cmath>

#include "Rational.h"

using namespace std;


Rational::Rational(int n, int d) {
    if (checkDonominator(d) != 1) {
        cout << "Donominator will be equal to 1" << endl;
        d = 1;
    }
    numerator = n;
    donominator = d;

    leastCommonDivisor();
}

double Rational::getNumerator() {
    return numerator;
}

double Rational::getDonominator() {
    return donominator;
}

int Rational::checkDonominator(int d) {
    if (d != 0)
        return 1;
    
    cout << "Rational number with zero value can not create" << endl;
    return 0;
}

void Rational::leastCommonDivisor() {
    int counter = 1;
    int lcd = 1;

    while (counter <= numerator && counter <= donominator) {
        if (numerator % counter == 0 && donominator % counter == 0) {
            lcd = counter;
        }
        counter += 1;
    }

    numerator = numerator / lcd;
    donominator = donominator / lcd;

}

void Rational::add(Rational rat) {
    numerator = numerator * rat.getDonominator() + rat.getNumerator() * donominator;
    donominator *= rat.getDonominator();
    leastCommonDivisor();
}

void Rational::subtract(Rational rat) {
    numerator = numerator * rat.getDonominator() - rat.getNumerator() * donominator;
    donominator *= rat.getDonominator();
    leastCommonDivisor();
}

void Rational::multiply(Rational rat) {
    numerator *= rat.getNumerator();
    donominator *= rat.getDonominator();
    leastCommonDivisor();
}

void Rational::divide(Rational rat) {
    numerator *= rat.getDonominator();
    donominator *= rat.getNumerator();
    leastCommonDivisor();
}

void Rational::display() {
    cout << (numerator * donominator > 0 ? "": "-") << abs(numerator) << "/" << abs(donominator);
    cout << endl;
}

void Rational::floatingPoint() {
    double res = static_cast<double> (numerator) / donominator;
    cout << "Floating point Number is: " << res << endl;
}
