#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    bool flag = true;
    for (int i=v.size()-2;i>=0;i--) {
        for(int j=0;j<=i;j++) {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if(flag) break;
        flag = true;
    }
    return v;
}