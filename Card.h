//
// Created by kjfke on 7/31/2025.
//

#ifndef CARD_H
#define CARD_H



#include <string> // For potential string attributes like card name or description

    class Card {
    public:
        // Constructor(s)
        Card(); // Default constructor
        Card(const std::string& Type, const std::string& description);

        // Member functions (getters and setters, or actions)
        std::string getType() const;
        std::string getDescription() const;

        // Example: A function to print card details
        void printCardDetails() const;

        // Add more member functions as needed for your game's logic
        // For instance, for a card's effect:
        // void applyEffect();

    private:
        std::string m_name;
        std::string m_description;
    };



#endif //CARD_H
