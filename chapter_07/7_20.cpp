#include <iostream>

using namespace std;

void outputArray(int array[], int size);

int main() {
    const int numberOfSeats = 10;
    int seats[numberOfSeats] = {};

    int firstClass = 0;
    int secondClass = 5;

    int flag = 1;

    int choice;

    while (flag) {
        if (firstClass == 5) {
            cout << "\nIt is only \"Economy Class\" have\n"
                 << "Do you want to book this one\n\n";
        }

        if (secondClass == 10) {
            cout << "\nIt is only \"First Class\" have\n"
                 << "Do you want to book this one\n\n";
        }

        cout << "Please type 1 for \"First Class\"\n"
             << "Please type 2 for \"Economy Class\"" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if ((firstClass == 5 && choice == 1) || (secondClass == 10 && choice == 2)) {
            cout << "Next flight leaves in 3 hours" << endl;
            outputArray(seats, numberOfSeats);
            flag = false;
        }

        if (firstClass <= 4 && choice == 1) {
            seats[firstClass] = 1;
            firstClass += 1;
        } else if (secondClass <= 9 && choice == 2) {
            seats[secondClass] = 1;
            secondClass += 1;
        }

        if (firstClass == 5 && secondClass == 10) {
            cout << "All seats is Full";
            outputArray(seats, numberOfSeats);
            flag = 0;
        }
    }

    return 0;
}

void outputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            cout << "\nBusiness Class: ";
        } else if (i == 5) {
            cout << "\nEconomy Class: ";
        }
        cout << array[i] << " ";
    }
    cout << endl;
}