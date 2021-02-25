#include<iostream>
using namespace std;
int main(){
    int a = 257;
    int *p = &a;
    cout<<(char)(*(char*)p + 'a')<<endl;
    cout<<*p<<endl;
    return 0;
}