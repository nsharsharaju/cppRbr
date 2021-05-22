#include<iostream>
using namespace std;

void fun(int n){
    cout<<"hello "<<n<<endl;
}

void fun(char n){
    cout<<"what's up "<<n<<endl;
}

int main(){
    long long int a = 1e5+7;
    fun(a);
    return 0;
}