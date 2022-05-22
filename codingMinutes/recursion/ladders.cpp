#include<bits/stdc++.h>
using namespace std;

void helper(int currentSum, int &count, int &target) {
    if(currentSum == target) {
        count++;
        return;
    }
    if(currentSum > target) return;
    for(int i=1;i<=3;i++) {
        helper(currentSum+i,count,target);
    }
}

int countWays(int target) {
    int count = 0;
    for(int i=1;i<=3;i++) {
        helper(i,count,target);
    }
    return count;
}

int main() {
    int target;
    cin >> target;
    cout << countWays(target) << endl;
    return 0;
}