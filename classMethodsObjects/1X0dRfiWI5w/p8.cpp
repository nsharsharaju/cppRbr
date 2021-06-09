#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(int x, int y) {
            a = x;
            b = y;
        }

        void operator+(A const &obj){
            a += obj.a;
            b += obj.b;
        }
        void print(){
            cout<<a<<b<<endl;
        }
};

int main(){
    A obj1(2,6), obj2(1,8);
    obj1+obj2; //obj1.operator+(obj2)
    obj1.print();
    obj2.print();
    return 0;
}