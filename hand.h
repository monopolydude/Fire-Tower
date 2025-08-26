#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include "Deck.h"
#include <vector>
#include <iostream>


class hand {
public:
    hand();

    int getHandSize();

    void setMaxHandSize(int size);

    void displayHand();

    void drawHand(Deck deck);

    void discardHand(Deck deck);

    Card pickCard();

private:
    int maxHandSize = 5;
    std::vector<Card> cardsInHand;
    Card bucket = new Card(cardType::BUCKET, cardName::BUCKET, "Bucket");
};



#endif //HAND_H
