#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {
public:
    Deck();

    void initializeDeck();

    void shuffle();

    Card drawCard();

    void discardCard(Card card);

    void reshuffleDiscardCardPileIntoDrawPile();

private:
    std::vector<Card> drawPile;
    std::vector<Card> discardPile;
};
#endif //DECK_H
