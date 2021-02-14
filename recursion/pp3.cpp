#include<iostream>
using namespace std;

void f(int x){
    if(x< 0) return;
    f(x-2);
    cout << x << " ";
    return;
}

int main(){
    int x;
    cin>>x;
    f(x);
    return 0;
}