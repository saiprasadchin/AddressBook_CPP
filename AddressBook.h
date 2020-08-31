#pragma
#include "Person.h"
#include<vector>

class AddressBook
{
public:
    vector<Person*> personList;
    void addPerson( Person* );
    int findByFirstNameAndLastName( Person* );
    void editPerson( Person* );
    void display();
};