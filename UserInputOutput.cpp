#include "UserInputOutput.h"

int UserInputOutput::getUserChoice()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) ADD \n2) EDIT \n3) DISPALY \n4) DELETE \n5) SORTBYNAME \n6) EXIT : ";
    cin >> choice;
    return choice;
}

Person* UserInputOutput::getPersonName()
{
    string firstName, lastName;
    Person* person = new Person();
    cout <<"\nEnter the First Name : ";
    cin >> firstName;
    cout <<"\nEnter the Last Name : ";
    cin >> lastName;
    person->setFirstName( firstName );
    person->setLastName( lastName );
    return person;
}

Person* UserInputOutput::getPersonDetails( Person* person )
{
    string cityName, stateName;
    int zipCode;
    long long phoneNumber;
    cout << "\nEnter the City : ";
    cin >> cityName;
    cout << "\nEnter the State : ";
    cin >> stateName;
    cout << "\nEnter the 6 Digit Zip code : ";
    cin >> zipCode;
    cout <<"\nEnter the 10 Digit Mobile Number : ";
    cin >> phoneNumber;
    person->setCity( cityName );
    person->setState( stateName );
    person->setZipcode( zipCode );
    person->setPhoneNumber( phoneNumber );
    return person;
}