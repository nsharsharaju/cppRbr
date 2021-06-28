#include<bits/stdtr1c++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i = (a);i < (b);i++)

int main() {
    unordered_set<int> a;
    a.insert({1,2,1,3,1});
    cout << a.size() << endl;
    for(auto i:a)
        cout << i << " ";

    auto it = a.find(4);
    if(it == a.end()) 
        cout << "Not found!" << endl;
    else
        cout << (*it) << endl;

    unordered_multiset<string> s;
    s.insert({"ab","ab","bd"});
    cout << s.size() << endl;

    unordered_set<int> s1{1,2,3}, s2{2,2,3,4};
    unordered_set<int> s3 = s1;
    s3.insert(s2.begin(),s2.end());
    
    return 0;
}