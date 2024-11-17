#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(double rPart, double iPart) {
    realPart = rPart;
    imaginaryPart = iPart;
}

void Complex::add(Complex com) {
    realPart += com.getRealPart();
    imaginaryPart += com.getImaginaryPart();
}

void Complex::subtract(Complex com) {
    realPart -= com.getRealPart();
    imaginaryPart -= com.getImaginaryPart();
}


double Complex::getRealPart() {
    return realPart;
}

double Complex::getImaginaryPart() {
    return imaginaryPart;
}


void Complex::display() {
    cout << "Complex number is: " << realPart 
    << (imaginaryPart >= 0 ? '+': '-') << abs(imaginaryPart) << "i" << endl;
}