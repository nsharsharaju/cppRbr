#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    int ans = 0;
    for(auto number: v)
        ans = ans^number;
    return ans;
}

int main() {
    vector<int> input = {1,1,2,2,3};
    int ans = xoring(input);
    cout << ans << endl;
    return 0;
}