// Structuer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enColor {
    Red, Green, Yellow, Blue
};
enum enGendor {
    Male, Female
};
enum enMaritalStatus {
    single, Married
};

struct stAddress {
    string StreetName;
    string BuildngNo;
    string PoBox;
    string ZipCode;
};
struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};
struct stPerson {
    string FirstNume;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGendor Gender;
    enColor Color;
};
int main()
{
    stPerson Person1;
    Person1.FirstNume = "Dani";
    Person1.LastName = "Same";

    Person1.ContactInfo.Email = "xyz@xyz.com";
    Person1.ContactInfo.Phone = "+5464535365";
    Person1.ContactInfo.Address.PoBox = "9999";
    Person1.ContactInfo.Address.ZipCode = "11111";
    Person1.ContactInfo.Address.StreetName = "Queen! Street";
    Person1.ContactInfo.Address.BuildngNo = "312";

    Person1.Gender = enGendor::Male;
    Person1.MaritalStatus = enMaritalStatus::single;
    Person1.Color = enColor::Blue;

    cout << Person1.ContactInfo.Address.StreetName << endl;
    cout << Person1.ContactInfo.Address.BuildngNo << endl;
    cout << Person1.ContactInfo.Address.PoBox << endl;
    cout << Person1.ContactInfo.Address.ZipCode << endl;
    cout << Person1.ContactInfo.Email << endl;
    cout << Person1.ContactInfo.Phone << endl;

    cout << Person1.FirstNume << endl;
    cout << Person1.LastName << endl;

    cout << Person1.MaritalStatus << endl;
    cout << Person1.Color << endl;

}
