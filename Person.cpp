#include "Person.h"

void Person::display() {
    cout <<"\n==========================\n";
    cout << "\nName     : " << this->firstName << " " << this->lastName;
    cout << "\nCity     : " << this->city;
    cout << "\nState    : " << this->state;
    cout << "\nZipCode  : " << this->zip;
    cout << "\nPhone    : " << this->phoneNumber;
}

string Person::getFirstName()
{
    return this->firstName;
}

string Person::getlastName()
{
    return this->lastName;
}

string Person::getCity()
{
    return this->city;
}

string Person::getState()
{
    return this->state;
}

int Person::getZipcode()
{
    return this->zip;
}

long long Person::getPhoneNumber()
{
    return this->phoneNumber;
}

void Person::setFirstName( string firstName )
{
    this->firstName = firstName;
}

void Person::setLastName( string lastName )
{
    this->lastName = lastName;
}
void Person::setCity(string city)
{
    this->city = city;
}

void Person::setState(string state)
{
    this->state = state;
}

void Person::setZipcode(int zipCode)
{
    this->zip = zipCode;
}

void Person::setPhoneNumber(long long phoneNumber)
{
    this->phoneNumber = phoneNumber;
}