#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    char data;
    unordered_map<char,Node*> m;
    bool isTerminal;

    Node(char d) {
        data = d;
        isTerminal = false;
    }
};

class Trie{
    Node* root;

public:
    Trie() {
        root = new Node('\0');
    }

    void insert(string word) {
        Node* temp = root;

        for(char ch: word) {
            if(temp->m.count(ch) == 0) {
                Node*n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }

    bool search(string word) {
        Node* temp = root;
        for(char ch:word) {
            if(temp->m.count(ch) == 0){
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};