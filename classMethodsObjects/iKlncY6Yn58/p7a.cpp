#include<iostream>
using namespace std;

class A{
    public:
    A(int x){
        cout<<"A"<<x<<endl;
    }
    void get(){cout<<"Hello World"<<endl;}
};

class B: protected A{
    public:
    B(int x, int y): A(y){
        cout<<"B"<<x<<endl;
    }
};

class C: public B{
    public:
    C(int x, int y, int z): B(y, z){
        get();
        cout<<"C"<<x<<endl;
    }
};

int main(){
    C obj(2,5,9);
    return 0;
}