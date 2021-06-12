#include<iostream>
using namespace std;

class B{
    public:
        virtual ~B()=0;
};
B::~B(){ //This is declaring globally. There is no reason for this kind of declaration.
    cout<<"Implemented PVF"<<endl;
}

class D : public B{
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