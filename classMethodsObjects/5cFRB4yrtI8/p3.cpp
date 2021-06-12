#include<iostream>
using namespace std;

class B{
    public:
        virtual ~B(){
            cout<<"B Virtual Function"<<endl;
        };
};

class C{
    public:
        virtual ~C(){
            cout<<"C Virtual Function"<<endl;
        };
};

class D: public B, public C{
    public:
        ~D(){
            cout<<"Derived destructor"<<endl;
        }
};

int main(){
    B *b = new D();
    delete b;
    return 0;
}

//Destructor are called in reverse order of Constructors