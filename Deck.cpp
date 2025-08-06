#include "Deck.h"
Deck::Deck() {}

void Deck::initializeDeck() {
    //Wind Cards
    for (int i = 0; i < 12; i++) {
        switch (i % 4) {
            case 0:
                // North Direction
                drawPile.push_back(Card(cardType::WIND, cardName::NORTH, "North"));
                break;
            case 1:
                // South Direction
                drawPile.push_back(Card(cardType::WIND, cardName::SOUTH, "South"));
                break;
            case 2:
                // East Direction
                drawPile.push_back(Card(cardType::WIND, cardName::EAST, "East"));
                break;
            case 3:
                // West Direction
                drawPile.push_back(Card(cardType::WIND, cardName::WEST, "West"));
                break;
        }
    }

    //Fire Cards
    for (int i = 0; i < 14; i++) {
        switch (i % 4) {
            case 0:
                // Burning Snag
                drawPile.push_back(Card(cardType::FIRE, cardName::BURNINGSNAG, "Burning Snag"));
                break;
            case 1:
                // Explosion
                drawPile.push_back(Card(cardType::FIRE, cardName::EXPLOSION, "Explosion"));
                break;
            case 2:
                // Flare Up
                drawPile.push_back(Card(cardType::FIRE, cardName::FLAREUP, "Flare Up"));
                break;
            case 3:
                // Ember
                drawPile.push_back(Card(cardType::FIRE, cardName::EMBER, "Ember"));
                break;
        }
    }

    //Water Cards
    for (int i = 0; i < 12; i++) {
        switch (i % 3) {
            case 0:
                // Air Drop
                drawPile.push_back(Card(cardType::WATER, cardName::AIRDROP, "Air Drop"));
                break;
            case 1:
                // Fire Engine
                drawPile.push_back(Card(cardType::WATER, cardName::FIREENGINE, "Fire Engine"));
                break;
            case 2:
                // Flare Up
                drawPile.push_back(Card(cardType::WATER, cardName::SMOKEJUMPER, "Smoke Jumper"));
                break;
        }
    }

    //Fire Break Cards
    for (int i = 0; i < 10; i++) {
        switch (i % 3) {
            case 0:
                // De/Reforest
                drawPile.push_back(Card(cardType::FIREBREAK, cardName::DEREFOREST, "De/Reforest"));
                break;
            case 1:
                // Dozer Line
                drawPile.push_back(Card(cardType::FIREBREAK, cardName::FIREENGINE, "Dozer Line"));
                break;
            case 2:
                // Scratch Line
                drawPile.push_back(Card(cardType::FIREBREAK, cardName::SCRATCHLINE, "Scratch Line"));
                break;
        }
    }

    shuffle();
}

void Deck::shuffle() {
    std::random_device rd; // Obtain a random number from hardware
    std::default_random_engine rng(rd()); // Seed the random number generator
    std::shuffle(drawPile.begin(), drawPile.end(), rng); // Shuffle the cards
}