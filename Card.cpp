#include "card.h"

Card::Card(cardType type, cardName name, const std::string& description) : type(type), name(name), description(description) {}

cardType Card::getType() const {
    return type;
};

cardName Card::getName() const {
    return name;
};

std::string Card::getDescription() const {
    return description;
}