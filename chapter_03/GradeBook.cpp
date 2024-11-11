#include "GradeBook.h"

#include <iostream>
#include <string>

using namespace std;

GradeBook::GradeBook(string name) { setCourseName(name); }

void GradeBook::setCourseName(string name) { courseName = name; }

string GradeBook::getCourseName() { return courseName; }

void GradeBook::displayMessage() { cout << "Welcome to the great book for\n" << getCourseName() << endl; }
