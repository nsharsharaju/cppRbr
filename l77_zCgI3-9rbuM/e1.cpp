#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back

void display(unordered_map<char, int> &u) {
    cout << "Printing contents of unordered map ----- "<<endl;
    for(auto &p: u)
        cout << p.F << "\t:" << p.S << endl;
    cout << "Printed " << u.size() << " elements successfully :) -------" << endl;
}

int main(){
    unordered_map<char,int> u;
    u['a'] = 1; //insertion
    u['a'] = 2; //update
    u['b'] = 1;
    u['t'] = 3;
    u['s'] = 3;
    u['d'] = 6;
    u.insert(mp('e',18));
    u.insert(mp('c',5));
    //display(u);

    if(u.find('b') == u.end())
        cout << "Key not found" << endl;
    else
        cout << "Key Found" << u['b'] << endl;
    return 0;
}