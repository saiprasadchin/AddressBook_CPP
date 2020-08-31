#pragma
#include<iostream>
using namespace std;
class Person {
public:
    string firstName;
    string lastName;
    string city;
    string state;
    int zip;
    long long phoneNumber;
    Person() {
        
    }
    Person(std::string fName, std::string lName, std::string city, std::string state, int zip, long long phone);
    void display();
};