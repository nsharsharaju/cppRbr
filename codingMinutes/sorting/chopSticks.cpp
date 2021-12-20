#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{   
    int res = 0;
    int n = length.size();
    int i = 1;
    sort(length.begin(),length.end());
    while(i<n) {
        if (length[i] - length[i - 1] <= D) {
            res++;
            i+=2;
        } else {
            i++;
        }
    }   
    return res;
}

int main() {
    vector<int> input = {1,2,3,4,5};
    int answer = pairSticks(input,2);
    cout << answer << endl;
    return 0;
}