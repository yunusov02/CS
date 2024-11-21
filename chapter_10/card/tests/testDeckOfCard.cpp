#include <iostream>

#include "../Card.h"
#include "../DeckOfCards.h"

using namespace std;


void test_dealCard();
void test_moreCards();
void test_countOfCards();

int main() {
    
    cout << "Test for DeckOfCards class" << endl;

    cout << "Test 1: ";
    test_countOfCards();

    cout << "Test 2: ";
    test_dealCard();

    cout << "Test 3: ";
    test_moreCards();

    // DeckOfCards deckCard;
    // deckCard.shuffle();

    // for (int i = 0; i < 52; i++) {
    //     cout << deckCard.dealCard().toString() << endl;
    // }

    return 0;
}



void test_countOfCards() {
    DeckOfCards deckCards;

    cout << (deckCards.getCountOfCards() == SUITS * FACES ? "OK": "FAIL");
    cout << endl;

}


void test_dealCard() {
    DeckOfCards deckCards;
    
    Card cardLast1 = deckCards.dealCard();
    Card cardLast2 = deckCards.dealCard();
    Card cardLast3 = deckCards.dealCard();

    if ((cardLast1.getFace() != 3 || cardLast1.getSuit() != 12) ||
        (cardLast2.getFace() != 3 || cardLast2.getSuit() != 11) ||
        (cardLast3.getFace() != 3 || cardLast3.getSuit() != 10)) {
            cout << "FAIL";
    } else {
        cout << "OK";
    }
    cout << endl;
}


void test_moreCards() {
    DeckOfCards deckCard;
    Card card(1, 1);

    for (int i = 0; i < FACES * SUITS - 5; i++) {
        card = deckCard.dealCard();
    }

    cout << (deckCard.moreCards() == 1 ? "OK": "FAIL");
    cout << endl;
}

