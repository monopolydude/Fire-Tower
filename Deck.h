//
// Created by kjfke on 8/5/2025.
//

#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {
private:
std::vector<Card> drawPile;
std::vector<Card> discardPile;
std::default_random_engine rng;

public:
    Deck() {
        // Initialize the random number generator
        std::random_device rd;
        rng.seed(rd());
    }

    void addCard(Card* card) {
        cards.push_back(card);
    }

    void shuffle() {
        std::shuffle(cards.begin(), cards.end(), rng); // Shuffle the deck
    }

    Card* drawCard() {
        if (cards.empty()) {
            return nullptr; // No cards left
        }
        Card* drawnCard = cards.back();
        cards.pop_back();
        return drawnCard;
    }


};



#endif //DECK_H
