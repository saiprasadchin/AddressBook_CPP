#pragma
#include<iostream>
#include "AddressBook.h"

using namespace std;

class UserInputOutput {
public:
    int getUserChoice();
    Person* getPersonName();
    Person* getPersonDetails( Person* );
    int getUserChoiceForSort();
    Person* getCityAndState();
};