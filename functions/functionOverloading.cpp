#include<iostream>
using namespace std;

int fun_overl(int a) {
    cout<<"I am only integer"<<endl;
    return 2*a;
}

char fun_overl(char a) {
    cout<<"I am only character"<<endl;
    return a+2;
}

int main() {
    int a = 10;
    char b = 'z';

    cout<<fun_overl(a)<<endl;
    cout<<fun_overl(b)<<endl;
    return 0;
}