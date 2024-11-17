#ifndef RATIONAL_H

#define RATIONAL_H

class Rational {
    private:
        int numerator;
        int donominator;
        void leastCommonDivisor();
        int checkDonominator(int);

    public:
        Rational(int = 1, int = 1);
        void add(Rational);
        void subtract(Rational);
        void multiply(Rational);
        void divide(Rational);
        void display();
        void floatingPoint();

        double getNumerator();
        double getDonominator();
};

#endif