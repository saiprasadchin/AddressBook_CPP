#include<iostream>
#include "Person.h"
using namespace std;

void displayWelcomeMessage() {
    cout << "Welcome to Address Book Program" << endl;
}

int main() {

    displayWelcomeMessage();
    Person person("saiprasad", "chindam","Mumbai", "Maha", 123456, 8080707195);
    person.display();
    return 0;
}