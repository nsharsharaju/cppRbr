#include<iostream>
using namespace std;

class A{
    public:
        void function(){
            cout<<"A"<<endl;
        }
};

class B{
    public:
        void function(){
            A obj;
            cout<<"B"<<endl;
            obj.function();
        }
};

int main(){
    B b;
    b.function();
    return 0;
}