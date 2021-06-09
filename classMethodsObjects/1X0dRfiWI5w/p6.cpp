#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(int x, int y) {
            a = x;
            b = y;
        }
        A operator+(A const &obj){
            A temp(0,0);
            temp.a = a + obj.a;
            temp.b = b + obj.b;
            return temp;
        }
        void print(){
            cout<<a<<b<<endl;
        }
};

int main(){
    A obj1(2, 6), obj2(1, 8);
    A obj3 = obj1 + obj2;
    obj3.print();
    return 0;
}