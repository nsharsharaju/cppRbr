#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(){
            a = 0, b = 0;
        }
        void set(int x, int y=4){
            a = x; b = y;
        }
        bool operator==(const A& obj){
            if(a==(obj.a+2) && b==obj.b) return true;
            else return false;
        }
};

int main(){
    A obj1, obj2;
    obj1.set(4,6);
    obj2.set(2,6);
    cout<<(obj1==obj2);
    obj2.set(6,6);
    cout<<(obj1==obj2);
    return 0;
}