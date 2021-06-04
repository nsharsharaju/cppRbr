#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor class A"<<endl;
        }
};

class myClass{
    public:
        static A getValue(){
            static A a;
            cout<<"Hello"<<endl;
            return a;
        }
};

int main(){
    myClass obj1;
    A obj2 = myClass::getValue();
    A obj3 = obj1.getValue();
    return 0;
}