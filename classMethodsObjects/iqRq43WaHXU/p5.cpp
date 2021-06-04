//The order in which destructors are called in reverse order

#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
        myClass(int x){
            a = x;
            cout<<"Constructor: "<<a<<endl;
        }
        ~myClass(){
            cout<<"Destructor: "<<a<<endl;
        }
};

int main(){
    myClass obj1(1), obj2(2), obj(3);
    return 0;
}