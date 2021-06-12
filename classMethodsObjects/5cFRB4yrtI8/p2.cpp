#include<iostream>
using namespace std;

class One{
    public:
        virtual int fun(int x, int y){
            return (x++ + ++y + x<<2);
        }
};

class Two: public One{
    public:
        int fun(int x, int y){
            return (++x + y++ + y>>2);
        }
        virtual int fun2() = 0;
};

int main(){
    One *ptr;
    Two obj; //We can't write this class Two is having pure virtual function and it's not inherited and implemented.
    ptr = &obj;
    cout<<ptr->fun(2, 3)<<endl;
    return 0;
}