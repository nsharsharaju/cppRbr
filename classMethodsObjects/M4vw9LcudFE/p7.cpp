#include<iostream>
using namespace std;

long long fun(long long n){
    long long result = 0;
    while(n!=0){
        result = result*10 + n%10;
        n /= 10;
    }
    return result;
}

int main(){
    long long n;
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}