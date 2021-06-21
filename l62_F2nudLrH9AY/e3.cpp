#include<bits/stdtr1c++.h>
using namespace std;

int& foo(int &x) {
    return x;
}

int bar(int &x) {
    return foo(x);
}

int main(){
    int b = 10;
    int a = bar(b);
    cout<<a<<endl;
    return 0; 
}