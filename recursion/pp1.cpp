#include<iostream>

using namespace std;

int f(int x,int y) {
    if(x == 0) return y;
    else return f(x-1,x+y);
}

int main() {
    int x,y;
    cin>>x>>y;
    cout<<f(x,y)<<endl;
    return 0;
}