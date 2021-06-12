#include<iostream>
using namespace std;

class B{
    public:
        B(){
            cout<<"Class B"<<endl;
        }
};

class C{
    public:
        C(){
            cout<<"Class C"<<endl;
        }
};

class D: public C,B{ //Here Class B has no visibility mode
    public:
        D(){
            cout<<"Class D"<<endl;
        }
};

int main(){
    B *b = new D();
    return 0;
}