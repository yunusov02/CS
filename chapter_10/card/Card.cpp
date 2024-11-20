#include <iostream>
#include <string>

#include "Card.h"

using namespace std;

const std::string Card::faces[FACES] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
const std::string Card::suits[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card(int face, int suit){
    this->face = face;
    this->suit = suit;
};

int Card::getFace() {
    return face;
}

int Card::getSuit() {
    return suit;
}

std::string Card::toString() {
    return faces[getFace()] + " of " + suits[getSuit()];
}

