#include <iostream>

// using std::cin;
// using std::cout;
// using std::endl;

using namespace std;

int main() {

        int num1, num2;

        cout << "Enter two integers to compare: ";
        cin >> num1 >> num2;

        if (num1 == num2)
            cout << num1 << "==" << num2 << endl;
        if (num1 < num2)
            cout << num1 << "<" << num2 << endl;
        if (num1 > num2)
            cout << num1 << ">" << num2 << endl;
    return 0;
}