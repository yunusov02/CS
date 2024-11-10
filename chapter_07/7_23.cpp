#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

const int poleSize = 20;


void outputPole(int array[][poleSize]);
void menu();


enum PenPosition {PEN_UP, PEN_DOWN};
enum Direction {RIGHT, DOWN, LEFT, TOP};

struct Turtle {
    int x = 0;
    int y = 0;
    PenPosition pen = PEN_UP;
    Direction direction = RIGHT;
};


int main() {

    int pole[poleSize][poleSize] = {};
    int flag = 1;

    Turtle turtle;

    int choice = 0;
    int forwardGo;

    while (flag) {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                turtle.pen = PEN_UP;
                break;
            case 2:
                turtle.pen = PEN_DOWN;
                break;
            case 3: // RIGHT
                turtle.direction = static_cast< Direction >((turtle.direction + 1) % 4);
                break;
            case 4: // LEFT
                turtle.direction = static_cast < Direction >((turtle.direction + 3) % 4);
                break;
            case 5:
                cin >> forwardGo;
                
                // Here we will write code to change some values
                // because now we don't know pointers;

                if (turtle.pen != PEN_UP) {
                    for (int i = 0; i < forwardGo; i++) {
                        if (turtle.direction == RIGHT && turtle.y + 1 < poleSize) turtle.y++;
                        else if (turtle.direction == DOWN && turtle.x + 1 < poleSize) turtle.x++;
                        else if (turtle.direction == LEFT && turtle.y - 1 >= 0) turtle.y--;
                        else if (turtle.direction == TOP && turtle.x - 1 >= 0) turtle.x--;

                        if (turtle.pen == PEN_DOWN) {
                            pole[turtle.x][turtle.y] = 1;
                        }
                    }
               }

                break;
            case 6:
                system("clear");
                outputPole(pole);
                break;
            case 9:
                flag = 0;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}


void outputPole(int array[][poleSize]) {
    for (int i = 0; i < poleSize; i++) {
        for (int j = 0; j < poleSize; j++) {
            if (array[i][j] == 0) {
                cout << ". ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}


void menu() {
    cout << "Menu\n" << endl;

    cout << "1  Pun Up" << endl;
    cout << "2  Pen Down" << endl;
    cout << "3  Turn Right" << endl;
    cout << "4 Turn Left" << endl;
    cout << "5, 10  Move forward 10 spaces (or a number other than 10)" << endl;
    cout << "6  Print the 20-by-20 array" << endl;
    cout << "9  End of Data" << endl;
    
}
