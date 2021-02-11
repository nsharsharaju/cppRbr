#include<iostream>
using namespace std;

int count_st(string s){
    int i = 0, ans = 0;
    while(s[i] != '\0'){
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i] == 'u')
            ans++;
        i++;
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<count_st(str)<<endl;
    return 0;
}