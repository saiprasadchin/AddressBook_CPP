#include "AddressBook.h"
#include <iostream>
#include <algorithm>

void AddressBook::addPerson( Person* personPtr )
{
    personList.push_back( personPtr );
}

int AddressBook::findByFirstNameAndLastName( Person* personPtr )
{
    int count = 0;
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        if( (*listPtr)->getFirstName() == personPtr->getFirstName() && (*listPtr)->getlastName() == personPtr->getlastName() ) {
            count = 1;
            return count;
        }
    }
    return count;
}

void AddressBook::editPerson(Person* person)
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        if( (*listPtr)->getFirstName() == person->getFirstName() && (*listPtr)->getlastName() == person->getlastName() )
        {
            (*listPtr)->setCity( person->getCity() );
            (*listPtr)->setState( person->getState() );
            (*listPtr)->setZipcode( person->getZipcode() );
            (*listPtr)->setPhoneNumber( person->getPhoneNumber() );
        }
    }
}

void AddressBook::display()
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); ++listPtr) {
        (*listPtr)->display();
    }
}

int AddressBook::deletePerson( Person* person )
{
    int count = 0;
    for (auto listPtr = personList.begin(); listPtr != personList.end(); listPtr++ )
    {
        if( (*listPtr)->getFirstName() == person->getFirstName() && (*listPtr)->getlastName() == person->getlastName() )
        {
            personList.remove( *listPtr );
            delete *listPtr;
            count = 1;
            return count;
        }
    }
    return count;
}

struct compareByNames
{
    bool operator()(Person *toCompare, Person *toCompareWith)
    {
        return toCompare->getFirstName() < toCompareWith->getFirstName();
    }
};

void AddressBook::sortByName()
{
    personList.sort(compareByNames());
}