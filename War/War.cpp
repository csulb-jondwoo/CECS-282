#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>

using namespace std;

void displayMenu() {
    cout << "1) New Deck\n";
    cout << "2) Show Deck\n";
    cout << "3) Shuffle\n";
    cout << "4) War!\n";
    cout << "5) Exit\n";
    
}

int main() {
    bool invalid_create = true;
    bool valid_war = true;
    bool invalid = true;
    int input;
    int input2;
    char input3;
    
    Deck deck;
    Deck refreshedDeck;
    
    while (invalid) {
        
        while (invalid_create) {
            displayMenu();
            cin >> input;
            if (input == 1) {
                cout << "Deck Created." << endl;
                deck = refreshedDeck;
                invalid_create = false;
            }
            else if (input == 2) {
                if (invalid_create == true) {
                    cout << "You must create a deck first." << endl;
                }
            }
            else if (input == 3) {
                if (invalid_create == true) {
                    cout << "You must create a deck first." << endl;
                }
            }
            else if (input == 4) {
                if (invalid_create == true) {
                    cout << "You must create a deck first." << endl;
                }
            }
            else{
                cout << "Goodbye. Press Enter to quit" << endl;
                getchar();
                getchar();
                invalid_create = false;
            }
        }
        
        if (invalid_create == false) {
            if (input == 5) {
                invalid = false;
            }
            else {
                displayMenu();
                cin >> input2;
                if (input2 == 1) {
                    deck = refreshedDeck;
                    cout << "Deck has been refreshed." << endl;
                    invalid_create = false;
                    valid_war = true;
                }
                else if (input2 == 2) {
                    deck.showDeck();
                    invalid_create = false;
                    valid_war = true;
                }
                else if (input2 == 3) {
                    deck.shuffle();
                    cout << "Deck has been shuffled." << endl;
                    invalid_create = false;
                    valid_war = true;
                }
                else if (input2 == 4) {
                    while (valid_war) {
                        cout << "Initiating War" << endl;
                        if (deck.cardsLeft() > 0) {
                            cout << "Cards Left: " << deck.cardsLeft() << endl;
                            cout << endl;
                            Card c1 = deck.deal();
                            cout << "Player 1 plays" << endl;
                            c1.showCard();
                            
                            Card c2 = deck.deal();
                            cout << "Player 2 plays" << endl;
                            c2.showCard();
                            
                            int cardValue1 = c1.getValue();
                            int cardValue2 = c2.getValue();
                            
                            if (cardValue1 > cardValue2) {
                                cout << "Player 1 wins" << endl;
                                cout << "Play again? - y/n" << endl;
                                cin >> input3;
                                if (input3 == 'n') {
                                    valid_war = false;
                                }
                            }
                            else if (cardValue1 < cardValue2) {
                                cout << "Player 2 wins" << endl;
                                cout << "Play again? - y/n" << endl;
                                cin >> input3;
                                if (input3 == 'n') {
                                    valid_war = false;
                                }
                            }
                            
                            else {
                                cout << "It's a tie" << endl;
                                cout << "Play again? - y/n" << endl;
                                cin >> input3;
                                if (input3 == 'n') {
                                    valid_war = false;
                                }
                            }
                        }
                        else {
                            cout << "Not enough cards to play. Create a new Deck." << endl;
                            invalid_create = true;
                            valid_war = false;
                        }
                        
                    }
                    
                }
                else {
                    cout << "Goodbye. Press Enter to quit" << endl;
                    getchar();
                    getchar();
                    invalid = false;
                }
            }
        }
    }
    return 0;
}

//cards go back to 52 when quit war in middle.
