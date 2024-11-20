#ifndef DECK_H
#define DECK_H

#include <vector>
#include <string>

#include "Card.h"

using namespace std;

class DeckOfCards {
    private:

        static int countOfCards;
        vector<Card>deck = {};

    public:
        DeckOfCards();

        int moreCards();
        Card dealCard();
        void shuffle();

};

#endif