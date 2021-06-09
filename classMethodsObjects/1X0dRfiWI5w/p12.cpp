#include<iostream>
using namespace std;

class A{
    public:
        int fun(int x){
            return x*x;
        }
        int fun(int &x){
            return x*10;
        }
};

int main(){
    int a=2;
    A obj;
    cout<<obj.fun(a);
    return 0;
}