#include<iostream>

using namespace std;

void f(int x) {
    if(x > 0){
        f(--x);
        cout<<x<<" ";
        f(--x); 
    }
}

int main(){
    int x;
    cin>>x;
    f(x);
    return 0;
}