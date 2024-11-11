#include <iostream>

#include "GradeBook.h"

using namespace std;

int main() {
    GradeBook myGradeBook("CS How To Program");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();

    return 0;
}