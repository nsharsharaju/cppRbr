#include<iostream>
using namespace std;

class B{
    public:
        virtual void fun1(){
            cout<<"Base ";
        }
        void fun2(){
            cout<<"Base ";
        }
};

class D: public B{
    public:
        void fun2(){
            cout <<"Derived ";
        }
};

int main(){
    B *ptr;
    D obj;
    ptr = &obj;
    ptr->fun1();
}