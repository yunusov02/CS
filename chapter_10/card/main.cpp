#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#include "Card.h"
#include "DeckOfCards.h"
#include "Player.h"

using namespace std;

int fivePockerHand(Player);

// int main() {

//     DeckOfCards deckCard;
//     deckCard.shuffle();

//     for (int i = 0; i < 52; i++) {
//         cout << i + 1 << " " << deckCard.dealCard().toString() << endl;
//     }

//     return 0;
// }



int fivePockerHand(Player player) {
    int maxCount = 0;
    int face;
    int suits;

    int size = player.getCardsSize();

    int count;

    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = 0; j < size; j++) {
            if (player.cards[i].getFace() == player.cards[j].getFace()) {
                count += 1;
            }
        }

        if (maxCount < count) {
            maxCount = count;
            face = player.cards[i].getFace();
            suits = player.cards[i].getSuit();
        }
    }
}

