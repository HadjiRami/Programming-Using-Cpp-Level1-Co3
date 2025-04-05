#include <string>
#include <iostream>
using namespace std;

void ReadNumber(int& Number1, int& Number2) {
    cout << "Enter the Number1?\n";
    cin >> Number1;
    cout << "Enter the Number2?\n";
    cin >> Number2;

}
void PrintNumber(int Number1, int Number2) {
    cout << "Number1: " << Number1 << endl;
    cout << "Number2: " << Number2 << endl;
}
int SuwabNumber(int& Number1, int& Number2) {
    int Tmp = Number1;
    Number1 = Number2;
    Number2 = Tmp;
    return Tmp;
}

int main()
{
    int Number1, Number2;
    // Reading the numbers
    ReadNumber(Number1, Number2);

    // Printing the numbers before swapping
    cout << "Before Swapping\n";
    PrintNumber(Number1, Number2);

    // Swapping the numbers
    SuwabNumber(Number1, Number2);
    // Printing the numbers after swapping
    cout << "After swap:" << endl;
    PrintNumber(Number1, Number2);
}

