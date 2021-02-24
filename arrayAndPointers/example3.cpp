#include<iostream>
using namespace std;

int fun(int p, int *q, int **r){
    ++*q;
    **r*=2;
    p%=11;
    return (p+*q+**r);
}

int main(){
    int *p,a;
    cin>>a;
    p = &a;
    cout<<fun(a, &a, &p)<<endl;
    cout<<a<<endl;
    return 0;
}