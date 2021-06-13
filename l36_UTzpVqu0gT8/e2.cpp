#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

class A{
    public:
        static int a;
        A(){};
};

int A::a = 3;

int main(){
    cout<<A::a<<endl;
    return 0;
}

