#include<iostream>
using namespace std;

class A{
    public:
        void function(){
            cout<<"A"<<endl;
        }
};

class C{
    public:
        void function(){
            cout<<"C"<<endl;
        }
};

class B: public A,C{
    public:
        void function(){
            cout<<"B"<<endl;
        }
};

int main(){
    B b;
    b.function();
    return 0;
}