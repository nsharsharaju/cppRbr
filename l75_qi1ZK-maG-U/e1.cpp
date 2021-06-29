#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second

class comp{
    public:
        bool operator()(char a, char b){
            return a>b;
        }
};

void display(map <char,int> u) {
    cout << "Printing elements of map --------" << endl;
    for(auto x:u) {
        cout << x.F << " : " << x.S << endl;
    }
    cout << "Printed Map" << endl;
}

void display(map <char,int,comp> u) {
    cout << "Printing elements of map --------" << endl;
    for(auto x:u) {
        cout << x.F << " : " << x.S << endl;
    }
    cout << "Printed Map" << endl;
}

void display(multimap <char,int> u) {
    cout << "Printing elements of map --------" << endl;
    for(auto x:u) {
        cout << x.F << " : " << x.S << endl;
    }
    cout << "Printed Map" << endl;
}


int main() {
    map <char, int> u;
    u['a'] = 2;
    u['a'] = 3;
    cout << u.size() << endl;
    u['b'] = 1;
    u['t'] = 3;
    u['s'] = 3;
    u['d'] = 6;
    u.insert({'e',2});
    u.insert(make_pair('e',10)); // Not updation
    u.insert({'c',5});
    cout << u.size() << endl;
    
    u.erase('a');
    u.insert({'a',10});
    display(u);

    auto it = u.begin();
    ++it;
    ++it;
    u.insert(it, {'z',9});
    display(u);

    cout << u['y'] << endl; //Garbage Value Here

    if(u.find('b') == u.end()){
        cout << "Key not found!" << endl;
    }
    else
        cout << "Key is found = " << u['b'] << endl;

    /*
    map<char, int, comp> v;
    v.insert(u.begin(),u.end());
    display(v);
    */

    multimap<char,int> v;
    v.insert({'a',2});
    v.insert({'a',1});
    v.insert({'a',3});
    v.insert({'b',3});
    display(v);
    
    auto res = v.equal_range('a');
    for(auto it = res.F; it != res.S; it++) {
        cout << it->second << endl;
    }

    return 0;
}