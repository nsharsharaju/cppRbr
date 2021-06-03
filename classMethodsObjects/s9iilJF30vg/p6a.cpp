#include<iostream>
using namespace std;

class A{
    const int a;
    int b;
    public:
        A(int x, int y){
            a = x;
            b = y;
            cout<<"Initialized"<<endl;
        }
};

int main(){
    A obj(2,4);
    return 0;
}