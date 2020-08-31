#include "AddressBook.h"

void AddressBook::addPerson( Person* personPtr ) {
    personList.push_back( personPtr );
}

int AddressBook::findByFirstNameAndLastName( Person* personPtr ) {
    int count = 0;
    for (auto i = personList.begin(); i != personList.end(); ++i) {
        if( (*i)->firstName == personPtr->firstName && (*i)->lastName == personPtr->lastName ) {
            count = 1;
            return count;
        }
    }
    return count;
}
