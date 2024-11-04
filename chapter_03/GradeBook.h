#include <string>

using namespace std;

// class GradeBook {
// 	private:
// 		string courseName;

// 	public:
// 		GradeBook(string name) {
// 			setCourseName(name);
// 		}

// 		void setCourseName(string name) {
// 			courseName = name;
// 		}
// 		string getCourseName() {
// 			return courseName;
// 		}

// 		void displayMessage(string courseName) {
// 			cout << "Welcome to the Grade book for\n" << getCourseName() << endl;
// 		}

// };

class GradeBook {
    public:
        GradeBook( string );
        void setCourseName( string );
        string getCourseName();
        void displayMessage();
    private:
        string courseName;
};