#include "hand.h"

hand::hand() {}

int hand::getHandSize() {
    return cardsInHand.size();
}

void hand::setHandSize(int size) {
    maxHandSize = size;
}

void hand::displayHand() {
    for (const auto& card : cardsInHand) {
        std::cout << card.getDescription() << " ";
    }
    std::cout << std::endl;
}

void hand::drawHand(Deck deck) {
    while (cardsInHand.size() < maxHandSize) {
        cardsInHand.push_back(deck.drawCard());
    }
}

void hand::discardHand(Deck deck) {
    for (const auto& card : cardsInHand) {
        //if want to discard discard then
        deck.discardCard(card);
    }
}

Card hand::pickCard() {
    displayHand();
    //need logic here
    return cardsInHand.front();
}


