#include<iostream>

using namespace std;

int main() {
    long long n,r,result=0;
    cin>>n;

    do {
        r = n%10;
        result+=r;
        n = n/10;
    } while(n!=0);

    cout<<result<<endl;
    return 1;
}