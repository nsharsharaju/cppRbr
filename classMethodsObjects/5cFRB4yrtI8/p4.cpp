#include<iostream>
using namespace std;

class B{
    public:
        virtual ~B()=0;
};

class D : public B{
    public:
        ~D(){
            cout<<"Derived destructor"<<endl;
        }
        ~B(){ //A class can't hold Contructor/Destructor of any other class
            cout<<"Implemented PVF"<<endl;
        }
};

int main(){
    B *b = new D();
    delete b;
    return 0;
}