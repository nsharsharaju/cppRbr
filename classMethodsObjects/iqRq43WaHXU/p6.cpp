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

/*
Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where previous state of function needs to be stored.
*/

void myFun(int x){
    static myClass obj1(x); //Addition of Static Here
}

int main(){
    myClass obj1(1), obj2(2), obj3(3);
    myFun(4);
    myFun(5);
    return 0;
}

//This problem for the
//order in which destructors are called