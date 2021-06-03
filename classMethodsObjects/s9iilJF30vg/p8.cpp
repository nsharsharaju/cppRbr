#include<iostream>
using namespace std;

class A{
    public:
        static int a;
        static void increment(){
            a++;
        }
        static int get(){
            return a;
        }
};

int A::a = 10;

int main(){
    A obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    A::increment();
    cout<<obj3.get()<<endl;
    return 0;
}