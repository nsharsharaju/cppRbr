#include<iostream>
using namespace std;

class One{
    public:
        virtual int fun(int x, int y){ //This is called
            return (x++ + ++y + x<<2);
        }
};

class Two: public One{
    public:
        int fun(int x, int y){
            return (++x + y++ + y>>2);
        }
};

int main(){
    One obj = Two(); //Default Copying //In this case virtual function and all those won't work.
    cout<<obj.fun(2,3)<<endl;
}