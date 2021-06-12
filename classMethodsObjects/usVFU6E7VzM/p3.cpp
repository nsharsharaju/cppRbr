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

class B: public A, C{
    public:
        void fun2(){
            function(); // Call to the function is ambiguous
            cout<<"B"<<endl;
        }
};

int main(){
    B b;
    b.fun2();
    return 0;
}