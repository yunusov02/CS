#include "GradeBook.h"

#include <iomanip>
#include <iostream>

using namespace std;

GradeBook::GradeBook(string name, const int gradesArray[][tests]) {
    setCourseName(name);

    for (int grade = 0; grade < students; grade++) {
        for (int test = 0; test < tests; test++) {
            grades[grade][test] = gradesArray[grade][test];
        }
    }
}

void GradeBook::setCourseName(string name) {
    if (name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
    }
}

string GradeBook::getCourseName() { return courseName; }

void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::processGrades() {
    outputGrades();

    cout << "\nLowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << endl;

    // << "\nClass average is " << setprecision << fixed << getAverage(grades[students], tests)
    outputBarChart();
}

int GradeBook::getMinimum() {
    int lowGrade = 100;

    for (int grade = 0; grade < students; grade++) {
        for (int test = 0; test < tests; test++) {
            if (grades[grade][test] < lowGrade) {
                lowGrade = grades[grade][test];
            }
        }
    }

    return lowGrade;
}

int GradeBook::getMaximum() {
    int highGrade = 0;

    for (int grade = 0; grade < students; grade++) {
        for (int test = 0; test < tests; test++) {
            if (grades[grade][test] > highGrade) {
                highGrade = grades[grade][test];
            }
        }
    }

    return highGrade;
}

double GradeBook::getAverage(const int setOfGrades[], const int grades) {
    int total = 0;

    for (int grade = 0; grade < students; grade++) {
        total += setOfGrades[grade];
    }

    return static_cast<double>(total) / students;
}

void GradeBook::outputBarChart() {
    cout << "\nGrade distribution" << endl;

    const int frequencySize = 11;
    int frequency[frequencySize] = {};

    for (int grade = 0; grade < students; grade++) {
        for (int test = 0; test < tests; test++) {
            frequency[grades[grade][test] / students]++;
        }
    }

    for (int count = 0; count < frequencySize; count++) {
        if (count == 0) {
            cout << "  0-9: ";
        } else if (count == 10) {
            cout << "  100: ";
        } else {
            cout << count * 10 << "-" << count * 10 + 9 << ": ";
        }

        for (int stars = 0; stars < frequency[count]; stars++) {
            cout << "*";
        }
        cout << endl;
    }
}

void GradeBook::outputGrades() {
    cout << "\nThe grades are:\n\n";

    for (int test = 0; test < tests; test++) {
        cout << "Test " << test + 1 << "  ";
    }

    cout << "Average" << endl;

    for (int student = 0; student < students; student++) {
        cout << "Student " << setw(2) << student + 1;

        for (int test = 0; test < tests; test++) cout << setw(8) << grades[student][test];

        double average = getAverage(grades[student], tests);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}
