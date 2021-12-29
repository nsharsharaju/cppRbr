#include<bits/stdc++.h>
using namespace std;

bool compare1(pair<string,int> f1, pair<string,int> f2) {
    return f1.first < f2.first;
}

bool compare2(pair<string,int> f1, pair<string,int> f2) {
    return f1.second < f2.second;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if(S == "price") {
        sort(v.begin(),v.end(),compare2);
    } else {
        sort(v.begin(),v.end(),compare1);
    }
    return v;
}

int main() {
    return 0;
}