#include<bits/stdc++.h>
using namespace std;

bool isMonotonicArray(vector<int>& array) {
    int n = array.size();
    if(n<3) return true;
    int flag = 0;

    for(int i=1;i<=n-1;i++) {
        if (flag == 0)
        {
            if (array[i] == array[i - 1]) continue;
            else if (array[i] > array[i - 1]) flag = 1;
            else flag = 2;
        }
        else if(flag == 1) {
            if(array[i] < array[i - 1]) return false;
        }
        else {
            if(array[i] > array[i - 1]) return false;
        }
    }
    return true;
}

int main() {
    vector<int> v = {11,11,9,4,3,3,3,1,-1,-1,3,3,3,5,5,5};
    bool o = isMonotonicArray(v);
    cout << o << endl;
    return 0;
}