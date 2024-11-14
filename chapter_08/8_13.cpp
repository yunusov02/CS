#include <iostream>

using namespace std;

int mystery(const char *);

int main() {
    char string[80];

    cout << "Enter a string: ";
    cin >> string;
    cout << mystery(string) << endl;

    return 0;
}

int mystery(const char *string1) {
    int x;

    for (x = 0; *string1 != '\0'; string1++) {
        x++;
    }
    return x;
}
