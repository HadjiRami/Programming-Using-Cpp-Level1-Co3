// Enum-If-Else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
enum enScrenColer{Red=1, Blue=2, Green=3,Yellow=4};

int main()
{
	cout << "*****************\n";
	cout << "Please Chose Number of your Color:" << endl;
	cout << "(1)Red\n";
	cout << "(2)blue\n";
	cout << "(3)Green\n";
	cout << "(4)Yellow\n";
	cout << "*****************\n\n";
	cout << "Your Choice?: ";
	int NumberOfColor;
	enScrenColer Color;
	cin >> NumberOfColor;
	Color = (enScrenColer)NumberOfColor;
	if (Color == enScrenColer::Red) {
		system("Color 4F");
	}
	else if (Color == enScrenColer::Blue)
	{
		system("Color 1F");
	}
	else if (Color == enScrenColer::Green) {
		system("Color 2F");
	}
	else if (Color == enScrenColer::Yellow) {
		system("color 6F");

	}
	else {
		("color 9F");
	}

}

