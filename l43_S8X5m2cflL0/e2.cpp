#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

bool IsEven (int i) { return (i%2) == 0; }

int main(){
    vector<int> v;
    for(int i=1;i<=10;i++){
        v.push_back(i);
    }
    int c = count_if(v.begin(),v.end(),IsEven);
    cout << c << endl;
    return 0;
}