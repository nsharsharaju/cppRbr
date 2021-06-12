#include<iostream>
using namespace std;

class B{
    int a;
    public:
        void fun(){
            cout << "Base Class" << endl;
        }
};

class D: public B{
    int a;
    int b;
    public:
        D(){
            cout<< "Derived Class Cons"<<endl;
        }
        void fun(){
            cout << "Derived Class" << endl;
        }
        void harsha(){

        }
};

int main(){
    B *b = new D();
    b->harsha();
    return 0;
}