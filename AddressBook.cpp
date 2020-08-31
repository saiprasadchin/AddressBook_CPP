#include "AddressBook.h"
#include <iostream>

void AddressBook::addPerson( Person* personPtr )
{
    personList.push_back( personPtr );
}

int AddressBook::findByFirstNameAndLastName( Person* personPtr )
{
    int count = 0;
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        if( (*listPtr)->firstName == personPtr->firstName && (*listPtr)->lastName == personPtr->lastName ) {
            count = 1;
            return count;
        }
    }
    return count;
}

void AddressBook::editPerson(Person* person)
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        if( (*listPtr)->firstName == person->firstName && (*listPtr)->lastName == person->lastName )
        {
            (*listPtr)->city = person->city;
            (*listPtr)->state = person->state;
            (*listPtr)->zip = person->zip;
            (*listPtr)->phoneNumber = person->phoneNumber;
        }
    }
}

void AddressBook::display()
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        (*listPtr)->display();
    }
}