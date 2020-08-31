#include<iostream>
#include "UserInputOutput.h"

using namespace std;

AddressBook addressBook;
UserInputOutput userInputOutput;

void displayWelcomeMessage() {
    cout << "Welcome to Address Book Program" << endl;
}

void selectChoice() {

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
                } else {
                        userInputOutput.getPersonDetails( personPtr );
                        addressBook.addPerson( personPtr );
                }
                break;
            case 2:
                endKey = false;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }
}

int main() {

    displayWelcomeMessage();
    selectChoice();
    return 0;
}