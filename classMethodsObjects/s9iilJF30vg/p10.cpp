#include<iostream>
using namespace std;

class A{
    public:
        static int a;
        static void increment(){
            a+=3;
        }
        int get(A obj){
            return (a+obj.a);
        }
};

int A::a = 10;

int main(){
    A obj1;
    int *ptr;
    ptr = &obj1.a;
    *ptr *= 2;
    cout<<obj1.get(obj1)<<endl;
    return 0;
}