// Problem#16-RectangleAreaThroughDiagonalandSideArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void  ReadNamber(float& A, float& D) {
    cout << "Pleas Enter rectangle side A ?" << endl;
    cin >> A;
    cout << "Pleas Enter rectangle diagonal D ?" << endl;
    cin >> D;
    
}
float CalculateArea(float A, float D) {
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}
void PrintResulrt(float Area)
{
    cout << "\nRectongle Area = " << Area << endl;
}

int main()
{
    float A, D;
    ReadNamber(A, D);
    PrintResulrt(CalculateArea(A, D));
    return 0;

}

