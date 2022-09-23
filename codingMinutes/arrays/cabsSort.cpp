#include<bits/stdc++.h>
using namespace std;

float calculateDistance(pair<int,int> c) {
    return sqrt(c.first*c.first + c.second*c.second);
}

bool compare(pair<int,int> c1, pair<int,int> c2) {
    return calculateDistance(c1) < calculateDistance(c2);
}

vector< pair<int,int> > sortCabs(vector< pair<int,int> > v){
    sort(v.begin(),v.end(), compare);
    return v;
}

int main(){
    return 0;
}