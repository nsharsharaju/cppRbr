#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(){
        a = 0;
    }
    A(int x){
        a = x;
    }
    void print(){
        cout<<a<<endl;
    }
};

int main(){
    static A obj1;
    static A obj2(12);
    A a(11);
    A b = obj2;
    b.print();
    obj1 = a;
    obj1.print();
    return 0;
}