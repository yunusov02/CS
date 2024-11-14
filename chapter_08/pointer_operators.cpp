#include <iostream>

using namespace std;

int main() {
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The value of a Ptr is " << aPtr << endl;

    cout << "\n\nThe value of a is " << a << endl;
    cout << "The value of *aPtr is " << *aPtr << endl;

    cout << "\n\nShowing that * and & are inserves of each other " << "\n &*aPtr = " << &*aPtr
         << "\n *&aPtr = " << &*aPtr << endl;

    return 0;
}