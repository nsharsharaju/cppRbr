#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n>>i;
    int bitMask = (1 << i);
    if((n&bitMask) > 0){
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}