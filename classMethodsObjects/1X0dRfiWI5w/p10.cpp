#include<iostream>
using namespace std;

class A{
    public:
        int add(int x= 0, int y = 0){
            return x+y+20;
        }
        int add(int x, int y){
            return x+y;
        }
};

int main(){
    int a= 2, b = 16;
    A obj;
    cout<<obj.add()<<endl; // We can't overload like this
    cout<<obj.add()<<endl;
    return 0;
}