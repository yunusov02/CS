#include <string>
using namespace std;

class GradeBook {
    public:
        GradeBook( string );
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void inputGrades();
        void displayGradeReport();
        int maximum(int, int, int);

    private:
        string courseName;
        int maximumGrade;
};
