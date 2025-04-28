
#include <iostream>
#include<string>
using namespace std;
struct strInfo
{
    int Age; bool HasDriverLicens;
};

strInfo ReadInfo() {
    strInfo Info;
    cout << "Enter Your Age !:";
    cin >> Info.Age;
    cout << "Do you have a Driver Licenc yes: 1, no: 0";
    cin >> Info.HasDriverLicens;

    return Info;

}
bool IsAccepted(strInfo Info) {
    return (Info.Age > 21 && Info.HasDriverLicens);
}
void PrintResult(strInfo Info) 
{
    if (IsAccepted(Info)) {
        cout << "\nHiren";
    }
    else cout << "\n Rejected";

}

int main()
{
   PrintResult(ReadInfo());
   return 0;
}

