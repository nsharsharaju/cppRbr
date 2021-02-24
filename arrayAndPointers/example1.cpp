#include<iostream>
using namespace std;

int main(){
    int *p, a;
    cin>>a;
    p = &a;

    cout<<a<<endl;
    *p += 20;
    cout<<a<<endl;
    return 0;
}