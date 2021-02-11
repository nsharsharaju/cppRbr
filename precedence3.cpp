#include<iostream>
using namespace std;
int main()
{
    int a = 1, b = 3;

    b += a++ + a++ + --a;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}