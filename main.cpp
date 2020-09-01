#include<iostream>
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
    bool endKey = true;
    while (endKey)
    {
        int choice = userInputOutput.getUserChoice();
        switch (choice)
        {
            case 1: 
                Person* personPtr;
                personPtr = userInputOutput.getPersonName();
                if ( addressBook.findByFirstNameAndLastName( personPtr ) != 0 ) {
                    cout << "\nPerson Already Exist\n";
                    delete personPtr;
                } else {
                    userInputOutput.getPersonDetails( personPtr );
                    addressBook.addPerson( personPtr );
                }
                break;
            case 2:
                Person* personEdit;
                personEdit = userInputOutput.getPersonName();
                if ( addressBook.findByFirstNameAndLastName( personEdit ) == 0 ) {
                    cout << "\nNo Data Found\n";
                } else {
                    userInputOutput.getPersonDetails( personEdit );
                    addressBook.editPerson( personEdit );
                }
                delete personEdit;
                break;
            case 3:
                addressBook.display();
                break;
            case 4:
                Person* personDelete;
                personDelete = userInputOutput.getPersonName();
                if ( addressBook.deletePerson( personDelete ) == 0 ) {
                    cout << "\nNo Data Found\n";
                } else {
                    cout << "\nDeleted Successfully\n";
                }
                delete personDelete;
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