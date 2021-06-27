#include<bits/stdtr1c++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define F first
#define S second
#define pi pair<int, int>

bool sortByThird(const pair<int,pi> &a, const pair<int, pi> &b) {
    return (a.S.S < b.S.S);
}

bool comp(const pi &a, const pi &b) {
    if(a.S == b.S) return (a.F > b.F);
    return (a.S < b.S);
}

template <class Pair>
void displayVecPair(const vector <Pair> &v) {
    cout << "---" << endl;
    for(auto e:v) {
        cout << '(' << e.F << ", " << e.S << ')' << endl;
    }
    cout << "Printed " << v.size() << " pairs of the vector!" << endl;
}

template <class Pair>
void displayvecTrip(const vector<Pair> &v) {
    cout << "---" << endl;
    for(auto e:v){
        cout << "(" << e.F << ", " << e.S.F << ", " << e.S.S << ')' << endl;
    }
    cout << "Printed " << v.size() << " pairs of the vector!" << endl;
}

int main() {

    vector<pair<int,pi>> v3;
    v3.pb({3,{1,2}});
    v3.pb({1,{3,3}});
    v3.pb({2,{3,2}});
    sort(v3.begin(),v3.end(),sortByThird);
    displayvecTrip(v3);

    vector<pi> v4;
    v4.pb({2,1});
    v4.pb({3,1});
    v4.pb({1,2});
    v4.pb({5,2});
    v4.pb({7,0});

    sort(v4.begin(),v4.end(),comp);
    displayVecPair(v4);

    return 0;
}