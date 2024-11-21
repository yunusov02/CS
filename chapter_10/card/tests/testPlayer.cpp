#include <iostream>
#include <string>

#include "../Card.h"
#include "../Player.h"

using namespace std;

void test_fullName();
void test_setCards();

int main() {

    cout << "Test for Players" << endl;

    cout << "Test 1: ";
    test_fullName();

    cout << "Test 2: ";
    test_setCards(); 

    return 0;
}


void test_fullName() {
    Player player("Player", "1");

    cout << (player.getFullName() == "Player 1" ? "OK": "FAIL");
    cout << endl;
}

void test_setCards() {
    Player player("Player", "2");

    for (int i = 1; i < 6; i++) {
        player.setCards(Card(i, 2));
    }

    cout << (player.getCardsSize() == 5 ? "OK": "FAIL");
    cout << endl;
}
