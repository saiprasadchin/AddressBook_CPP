#pragma
#include<iostream>
using namespace std;
class Person {
    string firstName;
    string lastName;
    string city;
    string state;
    int zip;
    long long phoneNumber;
public:
    Person() {
    }
    string getFirstName();
    string getlastName();
    string getCity();
    string getState();
    int getZipcode();
    long long getPhoneNumber();
    void display();
    void setFirstName( string firstName );
    void setLastName( string lastName );
    void setCity( string city );
    void setState( string state );
    void setZipcode( int zip_code );
    void setPhoneNumber( long long phone_number );
};