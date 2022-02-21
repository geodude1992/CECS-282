//
// Created by obliv on 2/7/2022.
//
#include <iostream>
#include <string>
#include <map>
#include "Card.h"

using namespace std;

Card::Card() {  // create a “default” card

}
Card::Card(char r, char s){     // constructor to create a card, setting the rank and suit
    rank = r;
    suit = s;
}
void Card::setCard(char r, char s){     //set existing card to new values
    rank = r;
    suit = s;
}
int Card::getValue(){   // return the point value of the card. Ace = 1, 2 thru 10, Jack = 10, Queen = 10, King = 10
    map<char, int> values = {{'A', 1}, {'2', 2},{'3', 3},
                            {'4', 4}, {'5', 5},{'6', 6},
                            {'7', 7}, {'8', 8},{'9', 9},
                            {'T', 10}, {'J', 10},{'Q', 10},{'K', 10}};
    return values[rank];
}
void Card::display(){   // display the card using 2 fields… Ace of Spade:AS, Ten of Diamond:10D, Queen of Heart:QH, Three of Club:3C. (If you want to get fancy, you can use these symbols for the suit ♠, ♣, ♥, ♦)

    char diamond[2] = {'\4'};
    char club[2] = {'\5'};
    char heart[2] = {'\3'};
    char spade[2] = {'\6'};

    string rk;
    rk = rank;

    if(rank == 'T'){
        rk = "10";
    }
    // suits: D, C, H, S
    if(suit == 'D'){
        cout << rk << diamond;
    }else if(suit == 'C'){
        cout << rk << club;
    }else if(suit == 'H'){
        cout << rk << heart;
    }else if(suit == 'S'){
        cout << rk << spade;
    }
}