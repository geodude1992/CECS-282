//
// Created by obliv on 2/7/2022.
//
#include <cstdlib>     /* srand, rand, Convert string to double; int; long, etc, <stdlib.h> */
#include <iostream>
#include <map>
#include "Deck.h"
#include "Card.h"

using namespace std;

// Constructor which creates a deck of 52 cards. Ace of Spades on top, followed by the rest of the spades in order, H,D,C
Deck::Deck(){
    topCard = 0;
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suits[4] = {'S', 'H', 'D', 'C'};
    int deckIndex = 0;

    for(char suit : suits){
        for(char rank : ranks){
            // Create each card
            cards[deckIndex] = Card(rank, suit);
            deckIndex++;
        }
    }
}
void Deck::refreshDeck(){   // reset the deck so it looks like a new deck
    topCard = 0;
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suits[4] = {'S', 'H', 'D', 'C'};
    int deckIndex = 0;

    for(char suit : suits){
        for(char rank : ranks){
            // Create each card
            cards[deckIndex] = Card(rank, suit);
            deckIndex++;
        }
    }
}
Card Deck::Deal(){  // Deal a card from the top/last of the deck
    // Card c1;
    // c1 = cards[topCard]
    // topCard++
    // return c1
    return cards[topCard++];    //Post increment: increments after the line
}
void Deck::shuffle(){   // Shuffle the cards in the deck
    srand(time(nullptr));
    for(auto & card : cards) {
        // Random index 0-51
        int randIndex = rand() % 52;
        swap(cards[randIndex], card);
    }
}
bool Deck::isEmpty(){   // T if deck is empty F otherwise
    if(topCard==52){
        return true;
    }else{
        return false;
    }
}
void Deck::display(){   // show all the cards in the deck: 13 columns and 4 rows.
    int cardsIndex = 0;
    cout << "\nDisplaying Deck: \n";
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cards[cardsIndex++].display();
            cout<<", ";
        }
        cout<<endl;
    }
    cout<<endl;
}

