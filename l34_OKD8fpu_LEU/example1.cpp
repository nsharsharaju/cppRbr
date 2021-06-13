#include<iostream>
using namespace std;

template <class T>
T Large(T n1, T n2){
    return (n1 > n2) ? n1 : n2;
}

int main(){
    int i1 = 10, i2 = 20;
    float f1 =10.1, f2 = 21.3;
    cout << Large(i1,i2);
    cout << Large(f1,f2);
    return 0;
}