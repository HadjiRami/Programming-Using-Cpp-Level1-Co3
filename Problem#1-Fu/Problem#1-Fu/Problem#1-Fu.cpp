
#include <string>
#include <iostream>
using namespace std;
string ReadName() {
    string Name;
    cout << "Enter Your Name\n";
    getline(cin, Name);
    return Name;
}
void  PrintName(string Name) {

    cout << "\nYour Name it is: " << Name << endl;
}

int main()
{
    
    PrintName(ReadName());
    return 0;
}
