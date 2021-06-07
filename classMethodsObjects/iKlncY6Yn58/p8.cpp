#include<iostream>
using namespace std;

class A{
    public:
        ~A(){
            cout<<"A"<<endl;
        }
};

class B{
    public:
    ~B() {
        cout<<"B"<<endl;
    }
};

class C: public A, B{
    public:
        ~C(){
            cout<<"C"<<endl;
        }
};

int main(){
    C c;
    return 0;
}

//Here we are doing destructors

//Destructors are always called in the reverse order
//in which the constructors are called.