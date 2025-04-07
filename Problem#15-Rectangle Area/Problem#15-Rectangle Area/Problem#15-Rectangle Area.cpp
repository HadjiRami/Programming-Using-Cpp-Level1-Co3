// Problem#15-Rectangle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float  ReadNamber(float& A, float& B) {
    cout << "Pleas Enter rectangle width A ?" << endl;
    cin >> A;
    cout << "Pleas Enter rectangle length B ?" << endl;
    cin >> B;
    return A * B;
}

void PrintResult(float Area) {
    cout << "\nThe Rectangle Area = \n" << Area<< endl;
}

int main()
{
    float A, B;
    PrintResult(ReadNamber(A,B));
    return 0;
}

