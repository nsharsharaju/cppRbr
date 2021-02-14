#include<iostream>
using namespace std;

int fun(int &a, int b, int c){
    a += 10;
    b = b - ++c;
    c--;
    return a+b+c;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<fun(a,b,a)<<endl;
    cout<<" "<<a<<" "<<b<<endl;
    return 0;
}