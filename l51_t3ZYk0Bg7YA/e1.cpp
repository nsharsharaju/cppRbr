#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

void displayList(list<int> l) {
    for(auto it = l.begin();it!=l.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list<int> l1, l2;

    for(int i=1;i<=10;i++)
        l1.push_back(i);

    for(int i=5;i<=15;i++)
        l2.push_back(i);

    l1.pop_front();
    l2.pop_back();
    
    displayList(l1);
    displayList(l2);

    l1.reverse();
    displayList(l1);

    l1.sort();
    displayList(l1);


    list<int> l3(10,22);
    displayList(l3);
    l3.resize(7);
    displayList(l3);

    l3.assign(l2.begin(),l2.end());
    displayList(l3);

    list<int> l4(l3);

    cout << (l3==l4) << endl;

    cout << (l1>l4) << endl;

    l4.insert(l4.begin(),2,10);

    displayList(l4);

    l4.clear();

    cout << l4.size() << endl;

    cout << !l4.empty() << endl;

    return 0;
}