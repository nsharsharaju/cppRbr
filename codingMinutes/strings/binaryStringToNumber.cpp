#include<bits/stdc++.h>
using namespace std;
 
int binaryToDecimal(string s)
{
    reverse(s.begin(),s.end());
    int mul2 = 1;
    int ans = 0;
    for(auto c: s) {
        int num = c - '0';
        ans+=(mul2*num);
        mul2*=2;
    }
    return ans;
}


int main(){
    string s;
    cin >> s;
    cout << binaryToDecimal(s) << endl;
    return 0;
}