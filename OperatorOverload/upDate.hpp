#ifndef upDate_hpp
#define upDate_hpp

#include <stdio.h>
#include <string>

using namespace std;

int Greg2Julian(int, int, int);
void Julian2Greg(int, int &, int & , int &);

class upDate{
public:
    upDate();
    upDate(int, int, int);
    upDate(upDate &D);
    ~upDate();
    
    void setDate(int, int, int);
    void getMonthName();
    void incrDate(int);
    void decrDate(int);
    
    static int getDateCount();
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    int julian();
    int daysBetween(upDate);
    
    friend ostream &operator<<(ostream &out, const upDate &D);
    friend upDate operator+(int, upDate);
    
    upDate operator+(int);
    upDate operator-(int);
    int operator-(upDate);
    upDate &operator=(const upDate &D);
    upDate operator++(int);
    upDate &operator++();
    upDate operator--(int);
    upDate &operator--();
    
    bool operator==(upDate);
    bool operator<(upDate);
    bool operator>(upDate);
    
private:
    static int count;
    int* dptr;
};


#endif /* upDate_hpp */

