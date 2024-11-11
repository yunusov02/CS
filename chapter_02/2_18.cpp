#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2) cout << "These numbers are equal";

    if (num1 > num2) cout << num1 << " is larger";

    if (num1 < num2) cout << num2 << " is larger";

    return 0;
}