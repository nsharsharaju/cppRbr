#include<iostream>
using namespace std;

class A{
    public:
        int a, b;
        A(int a, int b){
            this->a = a;
            this->b = b;
        }
        int getSum(){
            return (a+b);
        }
};
int main(){
    A obj1(3, 7);
    A *ptr;
    ptr = &obj1;
    // *ptr.a = 5; // Here . is having more precendence so bracket is needed.
    // (*ptr).a = 5;
    ptr->a = 5; // This is more easy way to do.
    cout<<obj1.getSum()<<endl;
    return 0;
}