#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long result;
    if(n%2 == 0) {
        result = 0;
        for(int i=1;i<=n;i++) {
            result+=i;
        }
    }
    else {
        result = 1;
        for(int i=1;i<=n;i++) {
            result*=i;
        }
    }
    cout<<result<<endl;
    return 0;
}