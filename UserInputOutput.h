#pragma
#include<iostream>
#include "AddressBook.h"

using namespace std;

class UserInputOutput {
public:
    int getUserChoice();
    string getFirstName();
    string getLastName();
    Person* getPersonDetails( string, string );
    int getUserChoiceForSort();
    Person* getCityAndState();
    string getUserChoiceForCity();
    string getUserChoiceForState();
};