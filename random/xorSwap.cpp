#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 111;
    int b = 20;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}