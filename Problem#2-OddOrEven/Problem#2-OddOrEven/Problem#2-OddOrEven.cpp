#include <string>
#include <iostream>
using namespace std;

void ReadNumber(int& Number) {
    cout << "Enter a Number: \n";
    cin >> Number;
}
int OddOrEven(int Number) {
    if (Number == 0) {
        cout << "The number is Zero : " << Number << endl;

    }
    else if ( Number % 2 == 0) {
        cout << "The Number is Odd:" << Number << endl;
    }
    else {
         cout << "The Number Even:" << endl;
    }
    return Number;
}

int main()
{
    int Number;
    ReadNumber(Number);
    OddOrEven(Number);
    return 0;
}

