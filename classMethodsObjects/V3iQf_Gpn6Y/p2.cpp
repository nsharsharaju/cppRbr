#include<iostream>
using namespace std;

char *p[] = {"HELLO,","THIS","IS","JAY"};
char **q[] = {p+3, p+2, p+1, p};
char ***r = q;

int main(){
    cout<<**++r<<" ";
    cout<<*--*++r+2<<" ";
    cout<<*r[-2]+1<<" ";
    cout<<r[-1][-1]+1<<endl;
    return 0;
}