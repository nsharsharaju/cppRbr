#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int count = 0;
    for(auto number: v) {
        if(!(number&1)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}