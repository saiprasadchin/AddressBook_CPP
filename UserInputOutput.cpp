#include "UserInputOutput.h"

int UserInputOutput::getUserChoice() {
    int choice = 0;
    cout << "\n1) ADD \n2) EXIT : ";
    cin >> choice;
    return choice;
}

Person* UserInputOutput::getPersonName() {
    Person* person = new Person();
    cout <<"\nEnter the First Name : ";
    cin >> person->firstName;
    cout <<"\nEnter the Last Name : ";
    cin >> person->lastName;
    return person;
}

Person* UserInputOutput::getPersonDetails( Person* person ) {
    cout << "\nEnter the City : ";
    cin >> person->city;
    cout << "\nEnter the State : ";
    cin >> person->state;
    cout << "\nEnter the 6 Digit Zip code : ";
    cin >> person->zip;
    cout <<"\nEnter the 10 Digit Mobile Number : ";
    cin >> person->phoneNumber;
    return person;
}