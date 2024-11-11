#include <iostream>
#include <string>

#include "GradeBook.h"

using namespace std;

int main() {
    GradeBook gradebook1("Introduction to Computer Science");
    GradeBook gradebook2("CS50");

    cout << "gradebook1 created for course name " << gradebook1.getCourseName() << endl;
    cout << "gradebook2 created for course name " << gradebook2.getCourseName() << endl;

    return 0;
}
