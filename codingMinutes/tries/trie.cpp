#include<bits/stdc++.h>
#include "trie.h"
using namespace std;

int main() {
    Trie t;
    string words[] = {"hello","he","apple","aple","news"};
    for(auto word: words) {
        t.insert(word);
    }
    string key;
    cin>>key;
    cout << t.search(key) << endl;
    return 0;
}