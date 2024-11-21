#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "Card.h"

using namespace std;

class Player {
    private:
        std::string firstName;
        std::string lastName;    
    public:

        vector<Card> cards = {};


        Player(string, string);
        void setFirstName(string);
        void setLastName(string);
        std::string getFullName();
        void setCards(Card);
        int getCardsSize();
};

#endif
