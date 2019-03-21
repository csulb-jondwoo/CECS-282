//
//  Jon Ham
//  Professor Gold
//  CECS 282 - M/W
//  Struct Student Project
//  October 16, 2017
//

#include "myDate.hpp"
#include <iostream>
#include <cstring>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;



struct Student{
    char name[20];
    int ID;
    char grade;
    myDate Bday;
    string homeTown;
    
};

void initStudents(Student sa[], int n){
    string input;
    int y = 0;
    int m = 0;
    int d = 0;
    myDate bday;
    char grade[5] = {'A', 'B', 'C', 'D', 'F'};
    
    string names[10] = {"Ryan Gosling", "Rachel McAdams", "Chris Pratt", "Shia Labeouf", "John Mayor", "Jessica Simpson", "Ryan Reynolds", "Scarlett Johansson", "Marilyn Mansion", "Michael Jackson"};
    string homes[10] = {"Irvine", "Cupertino", "Los Angeles", "Long Beach", "Cerritos", "San Jose", "New York", "Las Vegas", "Austin", "San Francisco"};
    

    for(int i = 0; i < n; i++){
        //Name
        for(int i = 0; i < 10; i++){
            strcpy(sa[i].name, names[i].c_str());
        }
        
        //ID
        sa[i].ID = rand() % (9999-1000 + 1) + 1000;
        
        //Grade
        sa[i].grade = grade[(rand() % 5)];
        
        //Bday
        int lowerBoundJD = Greg2Julian(1995, 1, 1);
        int upperBoundJD = Greg2Julian(2000, 12, 31);
        int randJD = rand() % (upperBoundJD - lowerBoundJD + 1) + lowerBoundJD;
        Julian2Greg(randJD, y, m, d);
        myDate date(m, d, y);
        sa[i].Bday = date;
        
        //Home town
        for(int i = 0; i < 10; i++){
            sa[i].homeTown = homes[i];
        }
    }
}

void displayMenu(){
    cout << "0) Display original List" << endl;
    cout << "1) Display list sorted by Name" << endl;
    cout << "2) Display list sorted by Student ID" << endl;
    cout << "3) Display list sorted by Grade" << endl;
    cout << "4) Display list sorted by Birthday" << endl;
    cout << "5) Display list sorted by Home Town" << endl;
    cout << "6) Quit" << endl;
}

void displayList(Student **list){
    cout << setw(25) << left << "Name";
    cout << setw(25) << left << "Student ID";
    cout << setw(25) << left << "Grade";
    cout << setw(25) << left << "Birthday";
    cout << setw(25) << left << "Home Town" << endl;
    cout << setw(25) << left << "______";
    cout << setw(25) << left << "__________";
    cout << setw(25) << left << "_______";
    cout << setw(25) << left << "__________";
    cout << setw(25) << left << "__________" << endl;
   
    for(int i = 0; i < 10; i++){
        cout << left << setw(25) << (*(list+i))->name;
        cout << left << setw(25) << (*(list+i))->ID;
        cout << left << setw(25) << (*(list+i))->grade;
        (*(list+i))->Bday.display();
        cout << left << setw(25) << (*(list+i))->homeTown << endl;
        
    }
    
}

void swap(Student **a, Student **b){
    Student *temp = *a;
    *a = *b;
    *b = temp;
}

void sortByName(Student **nameList, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if( strcmp((*(nameList+j))->name, (*(nameList+(j+1)))->name) > 0){
                swap((nameList+j), (nameList+(j+1)));
            }
        }
    }
}

void sortByID(Student **idList, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if((*(idList+j))->ID > (*(idList+(j+1)))->ID){
                swap(idList+j, idList+(j+1));
            }
        }
    }
}

void sortByGrade(Student **gradeList, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if((*(gradeList+j))->grade > (*(gradeList+(j+1)))->grade){
                swap(gradeList+j, gradeList+(j+1));
            }
        }
    }
}

void sortByBday(Student **bdayList, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            int bday1 = Greg2Julian((*(bdayList+j))->Bday.getYear(), (*(bdayList+j))->Bday.getMonth(), (*(bdayList+j))->Bday.getDay());
            int bday2 = Greg2Julian((*(bdayList+(j+1)))->Bday.getYear(), (*(bdayList+(j+1)))->Bday.getMonth(), (*(bdayList+(j+1)))->Bday.getDay());
            if(bday1 > bday2){
                swap(bdayList+j, bdayList+(j+1));
            }
        }
    }
}

void sortByHome(Student **homeList, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if( ((*(homeList+j))->homeTown).compare((*(homeList+(j+1)))->homeTown) > 0){
                swap(homeList+j, homeList+(j+1));
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    srand(time(0));
    Student CECS282[10];
    bool invalid = true;
    int n = sizeof(CECS282) / sizeof(CECS282[0]);
    Student *name[10];
    Student *id[10];
    Student *grade[10];
    Student *bday[10];
    Student *homeTown[10];
    Student *orig[10];
    
    initStudents(CECS282, 10);
    for(int i = 0; i < 10; i++){
        *(orig + i) = CECS282 + i;
        *(name + i) = CECS282 + i;
        *(id + i) = CECS282 + i;
        *(grade + i) = CECS282 + i;
        *(bday + i) = CECS282 + i;
        *(homeTown + i) = CECS282 + i;
    }
    
    sortByName(name, n);
    sortByID(id, n);
    sortByGrade(grade, n);
    sortByBday(bday, n);
    sortByHome(homeTown, n);
    
    while (invalid){
        int input = 0;
        displayMenu();

        cin >> input;
        switch (input) {
            case 0: displayList(orig); break;
            case 1: displayList(name); break;
            case 2: displayList(id); break;
            case 3: displayList(grade); break;
            case 4: displayList(bday); break;
            case 5: displayList(homeTown); break;
            case 6:
                cout << "Goodbye" << endl;
                invalid = false;
                getchar();
                getchar();
                break;
                
            default:
                invalid = false;
                break;
        }
        cout << endl;
    }
    return 0;
}
