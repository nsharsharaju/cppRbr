#include<iostream>
#include<string>
using namespace std;

/*
This question is on Copy Constructor
*/

class A{
    int a;
    public:
    A(){
        a = 10;
        cout<<"Default constructor: " <<a<<endl;
    }
    A(const A &q){
        a = q.a;
        cout<<"Copy Constructor: "<<a<<endl;
    }
    void set_a(int x){
        a = x;
    }
};

int main(){
    A obj; obj.set_a(11);
    A a1 = obj;
    A a2(obj);
    return 0;
}