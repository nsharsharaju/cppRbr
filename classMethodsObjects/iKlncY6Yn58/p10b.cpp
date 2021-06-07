#include<iostream>
using namespace std;

class A{
    public:
        int a;
        void change(int i) {
            a = i;
        }
        void value_of_a(){
            cout<<a<<endl;
        }
};

class B: public A{
    int a = 15;
    public:
        void print(){
            cout<<a;
        }
};

int main(){
    B b;
    b.change(10); //This will change the attribute in A(a)
    b.print();
    b.value_of_a();
    return 0;
}