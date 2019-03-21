//  Jon Ham
//  Professor Gold
//  CECS282 - M/W
//  upDate Project
//  November 6, 2017
//
//

#include "upDate.hpp"
#include <string>
#include <iostream>
int upDate::count = 0;
int jd;

int Greg2Julian(int year, int month, int day){
    int i = year;
    int j = month;
    int k = day;
    
    jd = k - 32075 + 1461 * (i + 4800 + (j - 14) / 12) / 4 + 367 * (j - 2 - (j - 14) / 12 * 12) / 12 - 3 * ((i + 4900 + (j -14) / 12) / 100) / 4;
    
    return jd;
}

void Julian2Greg(int jd, int & year, int & month, int & day){
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int n = 0;
    
    l = jd + 68569;
    n = 4 * l / 146097;
    l = l - (146097 * n + 3) / 4;
    i = 4000 * (l + 1) / 1461001;
    l = l - 1461 * i / 4 + 31;
    j = 80 * l /2447;
    k = l - 2447 * j / 80;
    l = j /11;
    j = j + 2 - 12 * l;
    i = 100 * (n - 49) + i + l;
    
    year = i;
    month = j;
    day = k;
}

upDate::upDate(){
    dptr = new int[3];
    dptr[0] = 5;
    dptr[1] = 11;
    dptr[2] = 1959;
    count++;
}

upDate::upDate(int m, int d, int y){
    dptr = new int[3];
    dptr[0] = m;
    dptr[1] = d;
    dptr[2] = y;
    count++;
}

upDate::upDate(upDate &D){
    dptr = new int[3];
    dptr[0] = D.dptr[0];
    dptr[1] = D.dptr[1];
    dptr[2] = D.dptr[2];
    count++;
}

upDate::~upDate(){
    delete [] dptr;
    count--;
}

void upDate::setDate(int m, int d, int y){
    dptr[0] = m;
    dptr[1] = d;
    dptr[2] = y;
}

int upDate::getMonth(){
    return dptr[0];
}

int upDate::getDay(){
    return dptr[1];
}

int upDate::getYear(){
    return dptr[2];
}

void upDate::getMonthName(){
    string str_m;
    
    switch (dptr[0]) {
        case 1: str_m = "January"; break;
        case 2: str_m = "February"; break;
        case 3: str_m = "March"; break;
        case 4: str_m = "April"; break;
        case 5: str_m = "May"; break;
        case 6: str_m = "June"; break;
        case 7: str_m = "July"; break;
        case 8: str_m = "August"; break;
        case 9: str_m = "September"; break;
        case 10: str_m = "October"; break;
        case 11: str_m = "November"; break;
        case 12: str_m = "December"; break;
        default: break;
    }
    cout << str_m << endl;
}

void upDate::incrDate(int N){
    jd = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    jd += N;
    Julian2Greg(jd,  dptr[2], dptr[0], dptr[1]);
}

void upDate::decrDate(int N){
    jd = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    jd -= N;
    Julian2Greg(jd, dptr[2], dptr[0], dptr[1]);
}

int upDate::daysBetween(upDate D){
    int implicit_jd = 0;
    int explicit_jd;
    implicit_jd = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    explicit_jd = Greg2Julian(D.dptr[2], D.dptr[0], D.dptr[1]);
    
    return implicit_jd - explicit_jd;
}

upDate upDate::operator+(int n){
    upDate temp(*this);
    temp.incrDate(n);
    temp.setDate(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}

upDate operator+(int n, upDate D){
    upDate temp(D);
    int tempM = D.dptr[0];
    int tempD = D.dptr[1];
    int tempY = D.dptr[2];
    
    jd = Greg2Julian(tempY, tempM, tempD);
    jd += n;
    Julian2Greg(jd, tempY, tempM, tempD);
    temp.setDate(tempM, tempD, tempY);
    return temp;
}

upDate upDate::operator-(int n){
    upDate temp(*this);
    temp.decrDate(n);
    temp.setDate(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}

int upDate::operator-(upDate D){
    return daysBetween(D);
}

//void upDate::operator=(upDate D){
//    dptr[0] = D.dptr[0];
//    dptr[1] = D.dptr[1];
//    dptr[2] = D.dptr[2];
//}

upDate upDate::operator++(int dummy){
    upDate temp(*this);
    this->incrDate(1);
    return temp;
}

upDate &upDate::operator++(){
    this->incrDate(1);
    return *this;
}

upDate upDate::operator--(int dummy){
    upDate temp(*this);
    this->decrDate(1);
    return temp;
}

upDate &upDate::operator--(){
    this->decrDate(1);
    return *this;
}

bool upDate::operator==(upDate D){
    int jd1 = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    int jd2 = Greg2Julian(D.dptr[2], D.dptr[0], D.dptr[1]);
    if(jd1 == jd2){
        return true;
    }else{
        return false;
    }
}

bool upDate::operator<(upDate D){
    int jd1 = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    int jd2 = Greg2Julian(D.dptr[2], D.dptr[0], D.dptr[1]);
    if(jd1 < jd2){
        return true;
    }else{
        return false;
    }
}

bool upDate::operator>(upDate D){
    int jd1 = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    int jd2 = Greg2Julian(D.dptr[2], D.dptr[0], D.dptr[1]);
    if(jd1 > jd2){
        return true;
    }else{
        return false;
    }
}

upDate &upDate::operator=(const upDate &D){
    dptr[0] = D.dptr[0];
    dptr[1] = D.dptr[1];
    dptr[2] = D.dptr[2];
    return *this;
}

ostream &operator<<(ostream &out, const upDate &D){
    out << D.dptr[0];
    out << "/";
    out << D.dptr[1];
    out << "/";
    out << D.dptr[2];
    return out;
}

int upDate::julian(){
    jd = Greg2Julian(dptr[2], dptr[0], dptr[1]);
    return jd;
}

int upDate::getDateCount(){
    return count;                                                                                  
}
























