#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int>::iterator it;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (it = v.begin(); it != v.end(); it++) //v.end() point to v of size()
    {                                         //One element after the last
        cout << *it << " ";
    }

    vector<int> vec{10,20,30,40,50,60,70,80,90,100};
    vector<int>::iterator it1;
    for(it1 = vec.end(); it1 != vec.begin(); it1--){
        cout<<*it1<<" ";
    }
}