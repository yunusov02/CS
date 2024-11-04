#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name) {
	setCourseName(name);
}

void GradeBook::setCourseName(string name) {
	courseName = name;
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to the great book for\n" << getCourseName() << endl;
}


