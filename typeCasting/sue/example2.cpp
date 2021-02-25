#include<iostream>
using namespace std;

int main(){
    union var
    {
        /* data */
        int a,b;
    };

    var v;
    v.a = 10;
    v.b = 20;
    cout << v.a << endl;
    return 0;
}