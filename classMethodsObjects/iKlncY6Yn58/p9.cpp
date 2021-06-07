#include<iostream>
using namespace std;

class base{
    int a[10];
};

class b1: public base {};

class b2: public base {};

class derived: public b1, public b2 {};

int main(void){
    cout << sizeof(derived) << endl;
    return 0;
}

//sizeof(class) = sum of size of attributes(Also padding)