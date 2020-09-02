#include "UserInputOutput.h"

using namespace std;

int UserInputOutput::getUserChoice()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) ADD \n2) EDIT \n3) DISPALY \n4) DELETE \n5) SORTBYNAME \n6) SORT BY ( City, State, Zip ) \n7) VIEW BY CITY AND STATE \n8) VIEW BY CITY \n9) VIEW BY STATE \n10) EXIT : ";
    cin >> choice;
    return choice;
}

string UserInputOutput::getFirstName()
{
    string firstName;
    cout <<"\nEnter the First Name : ";
    cin >> firstName;
    return firstName;
}

string UserInputOutput::getLastName()
{
    string lastName;
    cout <<"\nEnter the Last Name : ";
    cin >> lastName;
    return lastName;
}

Person* UserInputOutput::getPersonDetails( string firstName, string lastName )
{
    string cityName, stateName;
    int zipCode;
    long long phoneNumber;
    Person* person = new Person();
    person->setFirstName( firstName );
    person->setLastName( lastName );
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

int UserInputOutput::getUserChoiceForSort()
{
    int choice = 0;
    cout <<"\n==========================\n";
    cout << "\n1) SORT BY CITY \n2) SORT BY STATE \n3) SORT BY ZIP   : ";
    cin >> choice;
    return choice;   
}

Person* UserInputOutput::getCityAndState()
{
    Person* person = new Person();
    string city, state;
    cout <<"Enter the City\n";
    cin >> city;
    cout <<"Enter the State\n";
    cin >> state;
    person->setCity(city);
    person->setState(state);
    return person;
}

string UserInputOutput::getUserChoiceForCity()
{
    string city;
    cout <<"\nEnter the City : ";
    cin >> city;
    return city;
}

string UserInputOutput::getUserChoiceForState()
{
    string state;
    cout <<"\nEnter the State : ";
    cin >> state;
    return state;
}