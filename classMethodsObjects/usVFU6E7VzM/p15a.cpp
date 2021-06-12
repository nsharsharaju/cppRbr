#include<iostream>
using namespace std;

class A{
    public:
        virtual void fun1(){
            cout<<"A";
        }
};

class B: public A{
    public:
        void fun1(){
            cout<<"B";
        }
};

class C: public B{
    public:
        void fun1(){
            cout<<"C";
        }
};

int main(){
    A *ptr;
    B b;
    C c;
    ptr = &b;
    ptr->fun1();
    ptr = &c;
    ptr->fun1();
}

