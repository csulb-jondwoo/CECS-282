#ifndef DECK_H
#define DECK_H
#include "Card.hpp"

class Deck {
private:
    Card storage[52];
    int topCard;
    int len;
    
public:
    Deck();
    void refreshDeck();
    Card deal();
    void shuffle();
    int cardsLeft();
    void showDeck();
    
};
#endif // !DECK_H;

