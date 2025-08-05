//
// Created by kjfke on 7/31/2025.
//

#ifndef CARD_H
#define CARD_H



#include <string> // For potential string attributes like card name or description

enum class cardType {FIRE, WIND, WATER, FIREBREAK, BUCKET, RECKLESSABANDON, FIRESTORM};

enum cardName {FLAREUP, BURNINGSNAG, EXPLOSION, EMBER, NORTH, SOUTH, EAST, WEST, DE/REFOREST, DOZERLINE, SCRATCHLINE, };

class Card {
protected:
    cardType type;
    cardName string name;
    std::string description;

public:
    // Constructor(s)
    Card(cardType Type, cardName name const std::string& description) : type(Type), name(name), description(description) {};

    // Member functions (getters and setters, or actions)
    cardType getType() const {return type;}
    cardName getName() const {return name;}
    std::string getDescription() const {return description;}

    // Example: A function to print card details
    void printCardDetails() const;
    };
#endif //CARD_H
