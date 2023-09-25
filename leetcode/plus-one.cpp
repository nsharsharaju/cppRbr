#include<bits/stdc++.h>
using namespace std;

pair<int,int> add(int d1, int d2) {
    int sum = d1+d2;
    if(sum<10) {
        return {0,sum};
    } else {
        int first = sum/10;
        int second = sum%10;
        return {first,second};
    }
}

vector<int> plusone(vector<int> &digits) {
    vector<int> output;
    int carry = 1;
    reverse(digits.begin(),digits.end());

    for(auto ele: digits) {
        pair<int,int> sum = add(ele,carry);
        output.push_back(sum.second);
        carry = sum.first;
    }
    if(carry != 0) output.push_back(carry);
    reverse(output.begin(),output.end());
    return output;
}

int main() {
    vector<int> digits = {9};
    vector<int> output = plusone(digits);

    for(auto ele: output) {
        cout << ele;
    }
    cout << endl;
}