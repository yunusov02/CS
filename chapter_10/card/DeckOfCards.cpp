#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int DeckOfCards::countOfCards = SUITS * FACES;

DeckOfCards::DeckOfCards() {
    for (int suit = 0; suit < SUITS; suit++) {
        for (int face = 0; face < FACES; face++) {
            deck.push_back(Card(suit, face));
        }
    }
}

int DeckOfCards::moreCards() {
    int res = countOfCards < 52 ? 1 : 0;
    return res;
}

Card DeckOfCards::dealCard() {
    Card deal = deck.back();
    deck.pop_back();
    countOfCards -= 1;
    return deal;
}


void swap(Card *card1, Card *card2) {
    Card temp = *card1;
    *card1 = *card2;
    *card2 = temp;
}


void DeckOfCards::shuffle() {
    for(int i = 0; i < countOfCards; i++) {
        int r = rand() % countOfCards;
        swap(&deck[i], &deck[r]);
    }
}

