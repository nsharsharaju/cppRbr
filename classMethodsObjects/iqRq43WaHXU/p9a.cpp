#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"A"<<endl;
        }
        A(int x){
            cout<<x;
        }
};

class B{
    A obj1;
    public:
        B(){
            cout<<"B"<<endl;
        }
};

int main()
{
    B obj1;
    B obj2;
    return 0;
}

//Initially whenever an Object is created
//First the memory will be allocated and
//then the constructor is called.