#include <time.h>
#include <string>
#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>
using namespace std;

Deck::Deck() {
    refreshDeck();
}

void Deck::refreshDeck() {
    char suit1 = 's';
    char suit2 = 'c';
    char suit3 = 'd';
    char suit4 = 'h';
    int incr = 0;
    bool invalid = true;
    
    while (invalid) {
        for (int s1 = 0; s1 < 13; s1++) {
            storage[incr].setCard(s1 + 1, suit1);
            incr++;
        }
        for (int s2 = 0; s2 < 13; s2++) {
            storage[incr].setCard(s2 + 1, suit2);
            incr++;
        }
        for (int s3 = 0; s3 < 13; s3++) {
            storage[incr].setCard(s3 + 1, suit3);
            incr++;
        }
        for (int s4 = 0; s4 < 13; s4++) {
            storage[incr].setCard(s4 + 1, suit4);
            incr++;
        }
        invalid = false;
    }
    len = (sizeof(storage) / sizeof(storage[0]));
    topCard = 0;
}

void Deck::shuffle() {
    srand(time(0));
    for (int i = 0; i < 939329; i++) {
        int x = rand() % len;
        int y = rand() % len;
        
        Card temp;
        temp = storage[x];
        storage[x] = storage[y];
        storage[y] = temp;
    }
    topCard = 0;
}

//fix
Card Deck::deal() {
    if (topCard < len) {
        storage[topCard++];
    }
    else {
        cout << "Cannot deal - not enough cards";
    }
    return storage[topCard];
}

void Deck::showDeck() {
    for (int i = 0; i < len; i++) {
        storage[i].showCard();
    }
}

int Deck::cardsLeft() {
    int cards_left = (sizeof(storage) / sizeof(storage[0])) - topCard;
    return cards_left;
}


