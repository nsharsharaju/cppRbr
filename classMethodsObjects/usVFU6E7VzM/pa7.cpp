#include<iostream>
using namespace std;

class B{
    int a;
    public:
        static virtual void fun(){
            cout<<"Base Class"<<endl;
        }
};

class D: public B{
    int a;
    public:
        void fun(){
            cout<<"Derived class"<<endl;
        }
};

int main(){
    B obj1;
    D obj2;
    B *b = &obj1;
    b->fun();
    return 0;
}