#include<iostream>
using namespace std;

class A{
    public:
        void function(){
            cout<<"A"<<endl;
        }
};

class B{
    public:
        void function(){
            cout<<"B"<<endl;
        }
};

int main(){
    A a;
    a.function();
    B b;
    b.function();
    return 0;
}