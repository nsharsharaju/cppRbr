#include<bits/stdc++.h>
using namespace std;

int main(){
    //string s = "hello harsha";
    string s;

    // for(char ch:s){
    //     cout << ch << endl;
    // }

    // getline(cin,s,'.');

    // for(char ch:s){
    //     cout << ch << endl;
    // }

    int n = 5;
    vector<string> sarr;
    string temp;

    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(auto s: sarr){
        cout << s << endl;
    }
    cout << endl;
    cout << s << endl;
    return 0;
}