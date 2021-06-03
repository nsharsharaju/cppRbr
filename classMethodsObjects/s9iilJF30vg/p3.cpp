#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a = 5;
        }
        friend void modify();
};

void modify(){
    A obj1;
    cout<<"Private member of Class A," << obj1.a;
}

int main(){
    A obj1;
    modify();
    return 0;
}