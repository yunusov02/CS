#include <iostream>

int main() {
    // Our first Programm
    // std::cout << "Welcome to C++\n";

    // std::cout << "This is";
    // std::cout << "my first programm!!!\n";

    int num1;
    int num2;
    int sum;

    std::cout << "Enter a first number: ";
    std::cin >> num1;

    std::cout << "Enter a second number: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}