#include<iostream>
using namespace std;

class A{
    public:
        A(int y){
            cout<<"A"<<y<<endl;
        }
};

class B: public A{
    public:
        B(int x, int y): A(x){ //This is a special syntax
            cout<<"B"<<y<<endl;
        }
};

int main(){
    B obj(4,5);
    return 0;
}