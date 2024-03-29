#include<iostream>
#include <string>
#include "UserInputOutput.h"

using namespace std;

AddressBook addressBook;
UserInputOutput userInputOutput;

void displayWelcomeMessage()
{
    cout << "\nWelcome to Address Book Program\n";
}
void selectSortByCityStateZip()
{
    int choice = userInputOutput.getUserChoiceForSort();
    switch (choice)
    {
        case 1:
            addressBook.sortByCity();
            break;
        case 2:
            addressBook.sortByState();
            break;
        case 3:
            addressBook.sortByZipCode();
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
    addressBook.display();
}

void selectChoice()
{
    string cityName, stateName, firstName, lastName;
    bool endKey = true;
    while (endKey)
    {
        int choice = userInputOutput.getUserChoice();
        switch (choice)
        {
            case 1:
                Person* personPtr;
                firstName = userInputOutput.getFirstName();
                lastName = userInputOutput.getLastName();
                if ( addressBook.findByFirstNameAndLastName( firstName, lastName ) != 0 ) {
                    cout << "\nPerson Already Exist\n";
                    delete personPtr;
                } else {
                   personPtr = userInputOutput.getPersonDetails( firstName, lastName );
                    addressBook.addPerson( personPtr );
                }
                break;
            case 2:
                Person* personEdit;
                firstName = userInputOutput.getFirstName();
                lastName = userInputOutput.getLastName();
                if ( addressBook.findByFirstNameAndLastName( firstName, lastName ) == 0 ) {
                    cout << "\nNo Data Found\n";
                } else {
                    personEdit = userInputOutput.getPersonDetails( firstName, lastName );
                    addressBook.editPerson( personEdit );
                }
                delete personEdit;
                break;
            case 3:
                addressBook.display();
                break;
            case 4:
                firstName = userInputOutput.getFirstName();
                lastName = userInputOutput.getLastName();
                if ( addressBook.deletePerson( firstName, lastName ) == 0 ) {
                    cout << "\nNo Data Found\n";
                } else {
                    cout << "\nDeleted Successfully\n";
                }
                break;
            case 5:
                addressBook.sortByName();
                break;
            case 6:
                selectSortByCityStateZip();
                break;
            case 7:
                Person* personCityAnsStatePtr;
                personCityAnsStatePtr = userInputOutput.getCityAndState();
                addressBook.displayByCityAndState( personCityAnsStatePtr );
                delete personCityAnsStatePtr;
                break;
            case 8:
                cityName = userInputOutput.getUserChoiceForCity();
                addressBook.displayByCity( cityName );
                break;
            case 9:
                stateName = userInputOutput.getUserChoiceForState();
                addressBook.displayByState( stateName );
                break;
            case 10:
                endKey = false;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }
}

int main()
{
    displayWelcomeMessage();
    selectChoice();
    return 0;
}