#include<bits/stdtr1c++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i = (a);i < (b);i++)

int main(){
    unordered_set<int> s1;
    unordered_multiset<int> s2;
    s1.insert({1,2,3,1,2,3,1,1});
    s2.insert({1,2,3,1,2,3,1,1});

    cout << s1.size() << endl;
    cout << s2.size() << endl;

    for(auto s: s1)
        cout << s << endl;
    return 0;
}