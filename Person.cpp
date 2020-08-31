#include "Person.h"

Person::Person(string fName, string lName, string city, string state, int zip, long long phone) {
    this->firstName = fName;
    this->lastName = lName;
    this->city = city;
    this->state = state;
    this->zip = zip;
    this->phoneNumber = phone;
}

void Person::display() {
    cout << "Name     : " << this->firstName << " " << this->lastName << endl;
    cout << "City     : " << this->city << endl;
    cout << "State    : " << this->state << endl;
    cout << "ZipCode  : " << this->zip << endl;
    cout << "Phone    : " << this->phoneNumber << endl;
}