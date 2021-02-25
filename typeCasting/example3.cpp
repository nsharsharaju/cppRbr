//A very good question

#include<iostream>
using namespace std;

int main(){
    int a = 256;
    int *p = &a;
    char *q = (char*)p;
    cout<<char(*q+'a')<<endl;
    q++;
    cout<<char(*q+'a')<<endl;
    q++;
    cout<<char(*q+'a')<<endl;
    return 0;
}