#include <iostream>

using namespace std;

int main() {

    int num = 1;

    while (num <= 5) {
        cout << num << "\t" << num * 10 << "\t" << num * 100 << "\t" << num * 1000 << endl;
        num += 1;
    }


    return 0;
}