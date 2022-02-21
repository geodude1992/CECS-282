//
// Created by obliv on 2/7/2022.
//

#ifndef CECS_282_P1_SOLITAIRE_DECK_H
#define CECS_282_P1_SOLITAIRE_DECK_H
#include "Card.h"


class Deck {

private:
    Card cards[52];
    int topCard;

public:
    Deck();     // Constructor which creates a deck of 52 cards. Ace of Spades on top, followed by the rest of the spades in order, H,D,C
    void refreshDeck();     // reset the deck so it looks like a new deck
    Card Deal();    // Deal a card from the top of the deck
    void shuffle();     // Shuffle the cards in the deck
    bool isEmpty();     // T if deck is empty F otherwise
    void display();     // Show all the cards in the deck 13 col 4 rows
};


#endif //CECS_282_P1_SOLITAIRE_DECK_H
