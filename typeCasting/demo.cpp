#include<iostream>
using namespace std;

int main(){
    long a;
    int b = 1e5, c = 1e5;
    a = long(b*c);
    cout<<a<<endl;
    return 0;
}

//int ~ 10^9
//long ~ 10^18
//binary of 10^10
//extract LS 4 bytes

// (int * int)
// 1e5*1e5

// 1<=A,B <=1e9