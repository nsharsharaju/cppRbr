#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {2,3,4,5,1};
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while(j>0) {
            if(a[j]<a[j-1]) {
                swap(a[j],a[j-1]);
                j--;
                } 
            else break;
        }
    }
    for(auto ele:a) cout << ele << " ";
    cout << endl;
    return 0;
}