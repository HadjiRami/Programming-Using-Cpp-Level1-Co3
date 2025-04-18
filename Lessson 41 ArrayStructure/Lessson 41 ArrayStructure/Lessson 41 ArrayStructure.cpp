// Lessson 41 ArrayStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Array + structures + function

#include <iostream>
#include <string>
using namespace std;
struct strInfo {
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};
void ReadInfo(strInfo& Info) {
	cout << "Enter Your Firset Name:?\n";
	cin >> Info.FirstName;
	cout << "Enter Last Name?\n";
	cin >> Info.LastName;
	cout << "Enter Your Age?\n";
	cin >> Info.Age;
	cout << "Your Phone Number?\n";
	cin >> Info.Phone;
}
void PrintInfo(strInfo Info) {
	cout << "\n*****************************\n";
	cout << "FirstName : " << Info.FirstName << endl;
	cout << "FirstName : " << Info.LastName << endl;
	cout << "Age : " << Info.Age << endl;
	cout << "Pone : " << Info.Phone << endl;
	cout << "\n*****************************\n";
}

void ReadPersonInfo(strInfo Person[2]) {
	ReadInfo(Person[0]);
	ReadInfo(Person[1]);
 }
void PrintPersonInfo(strInfo Person[2]) {
	PrintInfo(Person[0]);
	PrintInfo(Person[1]);
}
int main()
{
	strInfo Person[2];
	ReadPersonInfo(Person);
	PrintPersonInfo(Person);
	return 0;
   
}

