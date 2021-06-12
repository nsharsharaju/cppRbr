#include<iostream>
using namespace std;

class A{
    public:
        virtual void fun1() = 0;
        void fun2(){
            cout<<"I am Base"<<endl;
        }
};

class B: public A{
    public:
        void fun1(){
            cout << "Implemented PVF A"<<endl;
        }
        virtual void fun3() = 0;
};

class C: public B,A{
    public:
        void fun3(){
            cout<<"Implemented PVF B"<<endl;
        }
};

int main(){
    C obj;
    obj.fun2();
}