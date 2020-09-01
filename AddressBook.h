#pragma
#include "Person.h"
#include<list>

class AddressBook
{
public:
    list<Person*> personList;
    void addPerson( Person* );
    int findByFirstNameAndLastName( Person* );
    void editPerson( Person* );
    void display();
    int deletePerson( Person* );
    void sortByName();
};