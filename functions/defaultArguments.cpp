#include<iostream>
using namespace std;

int fun(int a, int b = 10){
    return a*b;
}

int main(){
    int a;
    cin>>a;
    cout<<fun(a)<<endl;
    return 0;
}