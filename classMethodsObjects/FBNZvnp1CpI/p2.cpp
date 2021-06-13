#include<iostream>
using namespace std;

class A{
    static int i; //sizeof doesn't consider the size of static variables
    int j;
};

int A::i;
int main() {
    cout << sizeof(A);
    return 0;
}