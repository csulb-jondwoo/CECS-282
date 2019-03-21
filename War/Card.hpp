#ifndef CARD_H
#define CARD_H

class Card {
private:
    int rank;
    char suit;
    
public:
    Card();
    Card(int, char);
    void showCard();
    int getValue();
    void setCard(int, char);
};
#endif // !CARD_H


