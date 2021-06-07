#include<iostream>
using namespace std;

class A{
    public:
        A(int x){
            cout<<"A"<<x<<endl;
        }
};

class B: public A{
    public:
        B(int x): A(x){
            cout<<"B"<<x<<endl;
        }
};

int main(){
    B obj(12);
    return 0;
}