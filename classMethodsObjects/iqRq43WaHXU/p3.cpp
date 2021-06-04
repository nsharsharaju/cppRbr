#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
        myClass(int x){
            a = x;
            cout<<"Constructor: "<<a<<endl;
        }
        int getValue(){
            return a;
        }
};

int main(){
    myClass obj1(1), obj2;
    obj1.getValue();
    obj2.getValue();
    return 0;
}

//No default constructor is present here
//So this code gives error