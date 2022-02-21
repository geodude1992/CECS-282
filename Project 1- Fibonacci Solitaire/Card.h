//
// Created by obliv on 2/7/2022.
//

#ifndef CECS_282_P1_SOLITAIRE_CARD_H
#define CECS_282_P1_SOLITAIRE_CARD_H


class Card {
private:
    char rank;
    char suit;

public:
    Card();     // Create a "default" card
    Card(char r, char s);
    void setCard(char r, char s);
    int getValue();
    void display();
};

#endif //CECS_282_P1_SOLITAIRE_CARD_H
