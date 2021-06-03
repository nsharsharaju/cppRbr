#include<iostream>
using namespace std;

class A{
    static int a;
    public:
        void increment(){
            a++;
        }
        int get(){
            return a;
        }
};

int A::a = 10;

int main(){
    A obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    obj3.increment();
    cout<<obj3.get()<<obj2.get()<<obj1.get()<<endl;
    return 0
}