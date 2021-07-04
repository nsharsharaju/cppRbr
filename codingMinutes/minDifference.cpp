#include<bits/stdc++.h>
using namespace std;

void displayVector(vector<int> &a){
    for(auto e: a){
        cout << e << " ";
    }
    cout << endl;
    return;
}

pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    pair<int,int> ans;
    int i = 0, j = 0, min = INT_MAX;
    while(i < a.size() && j < b.size()) {
        int diff = abs(a[i] - b[j]);
        if(diff < min) {
            min = diff;
            ans.first = a[i];
            ans.second = b[j];
        }
        if(a[i] < b[j]){
            i++;
        }
        else j++;
    }
    return ans;
    
}

int main(){
    vector<int> a = {23,5,10,17,30};
    vector<int> b = {26,134,135,14,19};
    pair<int,int> ans = minDifference(a,b);
    cout << "{ " << ans.first << ", " << ans.second << " }" << endl;
    return 0; 
}