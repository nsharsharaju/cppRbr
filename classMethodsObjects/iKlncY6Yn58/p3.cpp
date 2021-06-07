#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
};
class C{
    public:
    C(){
        cout<<"C"<<endl;
    }
};
class B:public C, A{ // Constructors are called in order they are written. 
    public:
    B(){
        cout<<"B"<<endl;
    }
};
int main(){
    B obj;
    return 0;
}