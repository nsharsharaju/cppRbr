#include<bits/stdtr1c++.h>
using namespace std;

int& foo() {
    int a = 10;
    return a;
}

int main(){
    int a;
    a = foo();
    cout << a << endl;
    return 0;
}