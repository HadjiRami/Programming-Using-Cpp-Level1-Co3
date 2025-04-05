
#include <string>
#include <iostream>
using namespace std;
string  PrintName(string& Name) {

    return Name;
}

int main()
{
    string Name;
    cout << "Enter Your Name\n";
   getline(cin, Name);
    cout << "Your Name it is: " << PrintName(Name) << endl;
    return 0;
}
