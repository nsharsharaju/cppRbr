#include<bits/stdc++.h>
using namespace std;

int getNumberOfBits(int num) {
    int count = 0;
    while(num!=0) {
        if(num%2 == 1) count++;
        num = num/2;
    }
    return count;
}

bool customSort(int a, int b) {
    int c1 = getNumberOfBits(a);
    int c2 = getNumberOfBits(b);

    if(c1 == c2) {
        return a < b;
    } else {
        return c1 < c2;
    }
}

vector<int> sortByBits(vector<int>& arr) {
   sort(arr.begin(), arr.end(), customSort);
   return arr;     
}

int main(){
    vector<int> input = {0,1,2,3,4,5,6,7,8};
    vector<int> ans = sortByBits(input);

    for(auto ele:ans) {
        cout << ele << " ";
    }
    return 0;
}