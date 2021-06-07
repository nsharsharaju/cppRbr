#include<iostream>
using namespace std;

class A{
    public:
    A(int x){
        cout<<"A"<<x<<endl;
    }
};

class C{
    public:
    C(int x){
        cout<<"C"<<x<<endl;
    }
};

class B: public A,C{
    public:
    B(int x, int y, int z): C(x), A(y){ // Contructors will be called in the order they are inherited only.
        cout<<"B"<<z<<endl;
    }
};

int main(){
    B obj(2, 5, 9);
    return 0;
}