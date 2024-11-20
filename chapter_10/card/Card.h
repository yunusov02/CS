#ifndef CARD_H
#define CARD_H

#include <string>

#define FACES 13
#define SUITS 4


class Card {
    private:
        int face;
        int suit;

    public:

        static const std::string faces[FACES];
        static const std::string suits[SUITS];

        Card(int, int);
        int getFace();
        int getSuit();

        std::string toString();
};

#endif 