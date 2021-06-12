#include<iostream>
using namespace std;

class One{
    public:
        virtual int fun(int x, int y){
            return(x++ + ++y + x<<2);
        }
};

class Two: public One{
    public:
        int fun(int x, int y){
            return(++x + y++ + y>>2);
        }
};

int main(){
    One *ptr;
    Two obj;
    ptr = &obj;
    cout<<ptr->fun(2,3)<<endl;
}