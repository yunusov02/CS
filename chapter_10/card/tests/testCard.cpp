#include <iostream>
#include <cstring>

#include "../Card.h"

using namespace std;

void test_members();
void test_toString();
void test_suits();
void test_faces();


int main() {

    cout << "Test for Card class" << endl;

    cout << "Test 1: ";
    test_members();

    cout << "Test 2: ";
    test_toString();

    cout << "Test 3: ";
    test_faces();

    cout << "Test 4: ";
    test_suits();

    return 0;
}



void test_members() {
    Card card(1, 1);
    cout << (card.getFace() == 1 && card.getSuit() == 1 ? "OK": "FAIL");
    cout << endl;
}

void test_toString() {
    Card card(5, 2);
    cout << (card.toString() == "6 of Clubs" ? "OK": "FAIL");
    cout << endl;
}


void test_faces() {
    Card card(2, 2);
    std::string t_faces[FACES] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    for (int i = 0; i < FACES; i++) {
        if (t_faces[i] != card.faces[i]) {
            cout << "FAIL" << endl;
            return;
        }
    }

    cout << "OK" << endl;
}

void test_suits() {
    Card card(3, 3);
    std::string t_suits[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for (int i = 0; i < SUITS; i++) {
        if (t_suits[i] != card.suits[i]) {
            cout << "FAIL" << endl;
            return;
        }
    }

    cout << "OK" << endl;
}
