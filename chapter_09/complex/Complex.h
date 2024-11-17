#ifndef COMPLEX_H

#define COMPLEX_H

class Complex {
    private:
        double realPart;
        double imaginaryPart;
    public:
        Complex(double = 1, double = 1);

        void add(Complex);
        void subtract(Complex);
        void display();

        double getRealPart();
        double getImaginaryPart();
};

#endif
