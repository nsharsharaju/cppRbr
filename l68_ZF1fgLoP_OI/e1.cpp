#include<bits/stdtr1c++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back

template <class Pair>
void displayVecPair(const vector <Pair> &v) {
    cout << "---" << endl;
    for(auto e:v) {
        cout << '(' << e.F << ", " << e.S << ')' << endl;
    }
    cout << "Printed " << v.size() << " pairs of the vector!" << endl;
}

bool sortBySec(const pair<int,string> &a,const pair<int,string> &b){
    return (a.S > b.S);
}

int main() {
    pi a;
    a = mp(1,3);
    cout << a.F << " " << a.S << endl;

    vector<pi> v;
    v.pb(mp(41, 51));
    v.pb({21,31});
    displayVecPair(v);

    vector<pair <int, string>> v2;
    v2.pb({4, "Hello"});
    v2.pb({1, "World"});
    v2.pb({6, "Pair"});
    v2.pb({3, "Vector"});
    v2.pb({5, "Queue"});
    v2.pb({2, "Stack"});

    displayVecPair(v2);

    sort(v2.begin(),v2.end());
    displayVecPair(v2);

    sort(v2.begin(),v2.end(),sortBySec);
    displayVecPair(v2);

    return 0;
}