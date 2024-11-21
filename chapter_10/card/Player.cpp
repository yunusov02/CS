#include <iostream>
#include <string>

#include "Player.h"

using namespace std;


Player::Player(string fname, string lname) {
    setFirstName(fname);
    setLastName(lname);
}

void Player::setFirstName(string fname) {
    firstName = fname;
}

void Player::setLastName(string lname) {
    lastName = lname;
}

std::string Player::getFullName() {
    return firstName + " " + lastName;
}


void  Player::setCards(Card card) {
    if (cards.size() < 5) {
        cards.push_back(card);
        return;
    }

    cout << getFullName() << " already has 5 cards" << endl;
}


int Player::getCardsSize() {
    return cards.size();
}