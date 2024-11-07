#include <iostream>

using namespace std;


int gcd(int num1, int num2);


int main() {

    int num1, num2;
    int max, min;

    cout << "Enter a number: ";
    cin >> num1 >> num2;



    cout << gcd(num1, num2) << endl;

    return 0;
}

int gcd(int num1, int num2) {
    int commonGcd = 0;

    int flag = 1;

    while (flag) {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        } else if (num1 == num2) {
            commonGcd = num1;
            flag = 0;
        } else if (num1 > num2) {
            num1 = num1 - num2;
        }
    }

    return commonGcd;
}