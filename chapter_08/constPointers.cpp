#include <iostream>

using namespace std;

int main() {
    int x, y;

    int *const ptr = &x;

    // *ptr = 7; // allowed: *ptr is not const;
    // ptr = &y // not allowed: ptr is const; cannot assign to it a new address;

    int m = 5, n;

    const int *const mPtr = &x;

    // *mPtr = 7;
    // mPtr = &y;

    return 0;
}