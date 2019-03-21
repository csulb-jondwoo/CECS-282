#include <iostream>
#include <iomanip>
#include "Card.hpp"
using namespace std;

Card::Card(){
    rank = 'z';
    suit = 'z';
}

Card::Card(int r, char s){
    rank = r;
    suit = s;
}

void Card::showCard(){
    if (this->suit == 's') {
        if (this->rank == 11) {
            char face = 'J';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 12) {
            char face = 'Q';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 13) {
            char face = 'K';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 1) {
            char face = 'A';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 10) {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t          " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
        else {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *     *   *     * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
    }
    else if (this->suit == 'c') {
        if (this->rank == 11) {
            char face = 'J';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 12) {
            char face = 'Q';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 13) {
            char face = 'K';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 1) {
            char face = 'A';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 10) {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t          " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
        else {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|      *     *      |" << endl;
            cout << "|        * *        |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "| *   *   *   *   * |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "|         *         |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
    }
    else if (this->suit == 'd') {
        if (this->rank == 11) {
            char face = 'J';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 12) {
            char face = 'Q';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 13) {
            char face = 'K';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 1) {
            char face = 'A';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 10) {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t          " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
        else {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|         *         |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
    }
    else{
        if (this->rank == 11) {
            char face = 'J';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 12) {
            char face = 'Q';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 13) {
            char face = 'K';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 1) {
            char face = 'A';
            cout << " -------------------" << endl;
            cout << "|" << face << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << face << "|" << endl;
            cout << " -------------------" << endl;
        }
        else if (this->rank == 10) {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t          " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
        else {
            cout << " -------------------" << endl;
            cout << "|" << rank << "\t            |" << endl;
            cout << "|     * *    * *    |" << endl;
            cout << "|   *     *     *   |" << endl;
            cout << "| *               * |" << endl;
            cout << "|*                 *|" << endl;
            cout << "| *               * |" << endl;
            cout << "|   *           *   |" << endl;
            cout << "|     *       *     |" << endl;
            cout << "|       *   *       |" << endl;
            cout << "|         *         |" << endl;
            cout << "|\t           " << rank << "|" << endl;
            cout << " -------------------" << endl;
        }
    }
    
}

int Card::getValue() {
    return rank;
}

void Card::setCard(int r, char s){
    rank = r;
    suit = s;
}

