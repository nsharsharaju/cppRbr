#include<iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 4;

    b += a -= 6;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}