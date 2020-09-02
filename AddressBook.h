#pragma
#include "Person.h"
#include<list>

class AddressBook
{
public:
    list<Person*> personList;
    void addPerson( Person* );
    int findByFirstNameAndLastName( string, string );
    void editPerson( Person* );
    void display();
    int deletePerson( string, string );
    void sortByName();
    void sortByCity();
    void sortByState();
    void sortByZipCode();
    void displayByCityAndState( Person* );
    void displayByCity( string );
    void displayByState( string );
};