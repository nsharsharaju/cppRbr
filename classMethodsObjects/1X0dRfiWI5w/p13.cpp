#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a = 0;
        }
        void operator++(int){
            a+=3;
        }
        void print(){
            cout<<a<<endl;
        }
};

int main(){
    A obj;
    for(int i=0; i<5; i++) obj++;
    obj.print();
    return 0;
}