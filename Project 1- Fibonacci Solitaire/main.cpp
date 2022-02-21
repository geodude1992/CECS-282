// Jovanni D. Garcia
// Class (CECS 282-04)
// Project Name (Prog 1 – Solitaire Prime)
// Due Date (02/15/2022)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include "Deck.h"
#include "Card.h"

using namespace std;

bool isFibonacci(int n);

int main() {
    int input;  // Main Menu User input
    bool io = true;
    Deck gameDeck;
    int gamesPlayed = 0;
    while(io){
        // Main Menu
        cout << "\nWelcome to Fibonacci Solitaire!\n"
                "1) New Deck\n"
                "2) Display Deck\n"
                "3) Shuffle Deck\n"
                "4) Play Fibonacci Solitaire\n"
                "5) Exit\n\n"
                "Enter: ";
        cin >> input;
        if(input == 1){
            gameDeck.refreshDeck();
        }else if(input == 2) {
            gameDeck.display();
        }else if(input == 3) {
            gameDeck.shuffle();
        }else if(input == 4) {  // Main Game
            gamesPlayed++;
            gameDeck.shuffle();
            // pile
            int pileCollected=0;
            int currentSum=0;

            cout << "\n||Fibonacci Solitaire||\n";
            while(!gameDeck.isEmpty()) {
                // Take the top card from the deck and place it face up on the table.
                Card topCard = gameDeck.Deal();
                topCard.display();

                // The Sum is now the value of that card
                currentSum += topCard.getValue();
                // if fib pile++
                if(!gameDeck.isEmpty() && isFibonacci(currentSum)) {
                    cout << " sums to the Fibonacci number: " << currentSum << endl;
                    pileCollected++;
                    currentSum=0;   // current sum resets after each pile
                }
                if(gameDeck.isEmpty() && isFibonacci(currentSum)){      // Winner Outcome
                    pileCollected++;
                    cout << " with the Last Card the sum is a Fibonacci number: " << currentSum
                            << "\n\nWinner Winner Chicken Dinner with " << pileCollected
                            << " piles collected!\n" << "Games Played: " << gamesPlayed << endl;
                }
                if(gameDeck.isEmpty() && !isFibonacci(currentSum)){     // Loser Outcome
                    cout << " does NOT sum to a Fibonacci number! " << endl;
                    cout << "\nLoser with " << pileCollected
                            << " piles collected!\n" << "Game Over!!\n\n";
                }
            }
        }else if(input == 5){
            io = false;
        }else{
            cout << "\nInvalid input!\n\n";
        }
    }
}

bool isFibonacci(int n){
    int a=1;
    int b=1;
    int c=0;
    if(n==0 || n==1){
        return true;
    }else{
        while(c < n){
            c=a+b;
            b=a;
            a=c;
        }
        if(c==n){
            return true;
        }else{
            return false;
        }
    }
}