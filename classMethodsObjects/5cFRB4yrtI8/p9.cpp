#include<iostream>
using namespace std;

class Foo{
    public:
        int f(string str){
            cout<<str<<endl;
            return 0;
        }
};

int main(){
    int (Foo::*fptr) (string) = &Foo::f; //This is very beautiful concept in C++
    Foo obj;
    (obj.*fptr)("Hello");
    Foo* p = &obj;
    (p->*fptr)("World");
    return 0;
}