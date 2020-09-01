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

struct compareByCity
{
    bool operator()(Person *toCompare, Person *toCompareWith)
    {
        return toCompare->getCity() < toCompareWith->getCity();
    }
};

struct compareByState
{
    bool operator()(Person *toCompare, Person *toCompareWith)
    {
        return toCompare->getState() < toCompareWith->getState();
    }
};

struct compareByZipCode
{

    bool operator()(Person *toCompare, Person *toCompareWith)
    {
        return toCompare->getZipcode() < toCompareWith->getZipcode();
    }
};

void AddressBook::sortByName()
{
    personList.sort(compareByNames());
    display();
}

void AddressBook::sortByCity()
{
   personList.sort(compareByCity());
}

void AddressBook::sortByState()
{
    personList.sort(compareByState());
}

void AddressBook::sortByZipCode()
{
    personList.sort(compareByZipCode());
}

void AddressBook::displayByCityAndState( Person * person )
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); listPtr++ )
    {
        if( (*listPtr)->getCity() == person->getCity() && (*listPtr)->getState() == person->getState() )
        {
            (*listPtr)->display();
        }
    }
}

void AddressBook::displayByCity( string cityName )
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); listPtr++ )
    {
        if( (*listPtr)->getCity() == cityName )
        {
            (*listPtr)->display();
        }
    }
}

void AddressBook::displayByState( string stateName )
{
    for (auto listPtr = personList.begin(); listPtr != personList.end(); listPtr++ )
    {
        if( (*listPtr)->getState() == stateName )
        {
            (*listPtr)->display();
        }
    }
}