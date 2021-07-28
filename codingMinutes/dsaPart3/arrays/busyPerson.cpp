#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int countActivites(vector<pair<int,int> > activities){
    if(activities.size() == 0) return 0;
    sort(activities.begin(),activities.end(),compare);
    int count = 1;
    pair<int,int> lastActivity = activities[0];
    for(int i=1;i<activities.size();i++){
        if(activities[i].first >= lastActivity.second){
            count++;
            lastActivity = activities[i];
        }
    }
    return count;
}

int main(){
    vector<pair<int,int>> input = {{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};
    cout << countActivites(input) << endl;
    return 0;
}