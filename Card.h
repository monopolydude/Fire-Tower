#ifndef CARD_H
#define CARD_H

#include <string>

enum class cardType {FIRE, WIND, WATER, FIREBREAK, BUCKET, RECKLESSABANDON, FIRESTORM};

enum cardName {FLAREUP, BURNINGSNAG, EXPLOSION, EMBER, NORTH, SOUTH, EAST, WEST, FIREENGINE, AIRDROP, SMOKEJUMPER, DEREFOREST, DOZERLINE, SCRATCHLINE, BUCKET, RECKLESSABANDON, FIRESTORM};

class Card {
public:
    // Constructor
    Card(cardType type, cardName name, const std::string& description);

    // Member functions (getters and setters, or actions)
    cardType getType() const;
    cardName getName() const;
    std::string getDescription() const;

private:
    cardType type;
    cardName name;
    std::string description;
};
#endif //CARD_H
