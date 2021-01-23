#include<iostream>

using namespace std;

int main ()
{
    float inches;
    float cm;
    cout << "Convert Inches to CM\nEnter Inches: ";
    cin >> inches;
    cm = inches*2.54;
    cout << "CM = " << cm << "\n";
    return 1;
}