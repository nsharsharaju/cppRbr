#include<iostream>
using namespace std;

int fun(int a=10, int b =20, int c =30) {
    cout<<"a: "<<a<<", b: "<<b<<", c: "<<c<<endl;
    return a*b*c;
}

int main() {
    cout<<fun()<<endl;
    cout<<fun(4)<<endl;
    cout<<fun(4,5)<<endl;
    cout<<fun(4,5,6)<<endl;
    return 0;
}