#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string name;
    int age;
    int birthYear;
    char thisYear;
    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you " <<name<<"? " ;
    cin >> age;
    cout << name << ", have you had your birthday yet this year? (Y/y)? ";
    cin >> thisYear;
    
    if (thisYear == 'y' || thisYear == 'Y')
        birthYear = 2017 - age;
    else
        birthYear = 2017 - age - 1;
    cout << endl;
    cout << "Hi " << name << "!!!\n\nI guess that you were born in " << birthYear << endl;
    
    cout << "\n\nPress 'Enter' to continue:";
    getchar(); // this line will clear out the input buffer - there is a leftover carriage return
    getchar(); // this line wil cause the program to pause until you press the Enter key
    
    return 0;
}
