#include "AddressBook.h"
#include <iostream>
#include <algorithm>

void AddressBook::addPerson( Person* personPtr )
{
    personList.push_back( personPtr );
}

int AddressBook::findByFirstNameAndLastName( string firstName, string lastName )
{
    int count = 0;
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); ++personListPtr) {
        if( (*personListPtr)->getFirstName() == firstName && (*personListPtr)->getlastName() == lastName ) {
            count = 1;
            return count;
        }
    }
    return count;
}

void AddressBook::editPerson(Person* person)
{
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); ++personListPtr) {
        if( (*personListPtr)->getFirstName() == person->getFirstName() && (*personListPtr)->getlastName() == person->getlastName() )
        {
            (*personListPtr)->setCity( person->getCity() );
            (*personListPtr)->setState( person->getState() );
            (*personListPtr)->setZipcode( person->getZipcode() );
            (*personListPtr)->setPhoneNumber( person->getPhoneNumber() );
        }
    }
}

void AddressBook::display()
{
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); ++personListPtr) {
        (*personListPtr)->display();
    }
}

int AddressBook::deletePerson( string firstName, string lastName )
{
    int count = 0;
    for (auto listPersonPtr = personList.begin(); listPersonPtr != personList.end(); listPersonPtr++ )
    {
        if( (*listPersonPtr)->getFirstName() == firstName && (*listPersonPtr)->getlastName() == lastName )
        {
            personList.remove( *listPersonPtr );
            delete *listPersonPtr;
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
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); personListPtr++ )
    {
        if( (*personListPtr)->getCity() == person->getCity() && (*personListPtr)->getState() == person->getState() )
        {
            (*personListPtr)->display();
        }
    }
}

void AddressBook::displayByCity( string cityName )
{
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); personListPtr++ )
    {
        if( (*personListPtr)->getCity() == cityName )
        {
            (*personListPtr)->display();
        }
    }
}

void AddressBook::displayByState( string stateName )
{
    for (auto personListPtr = personList.begin(); personListPtr != personList.end(); personListPtr++ )
    {
        if( (*personListPtr)->getState() == stateName )
        {
            (*personListPtr)->display();
        }
    }
}