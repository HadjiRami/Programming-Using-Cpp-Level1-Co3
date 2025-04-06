#include <string>
#include <iostream>
using namespace std;
enum enNumberType{Odd = 1, Even = 2};

int  ReadNumber() {
    int Number;
    cout << "Enter a Number: \n";
    cin >> Number;
    return Number;
}

enNumberType CheckNumberType(int Number)
{
    int Result = Number % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}
void PrintNumberType(enNumberType NumberType) 
{
    if (CheckNumberType == enNumberType::Even)
        cout << "\n Number is Even.\n";
    else
        cout << "\n Number is odd \n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}

