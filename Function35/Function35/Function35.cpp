
#include <string>
#include <iostream>
using namespace std;
void MySumProcedure() {
    int Number1, Number2;
    cout << "Please Enter Number1?: \n";
    cin >> Number1;
    cout << "Please Enter Number2?: \n";
    cin >> Number2;
    cout << "Sum Number1 + Number2 = " << Number1 + Number2 << endl;
}
int MySumFunction() {
    int Number1, Number2;
    cout << "Please Enter Number1?: \n";
    cin >> Number1;
    cout << "Please Enter Number2?: \n";
    cin >> Number2;
    return Number1 + Number2;
}

int main()
{
    MySumProcedure();
    int Sum = MySumFunction();
    cout << "Sum 2 Number in Fu is = " << Sum << endl;
}

