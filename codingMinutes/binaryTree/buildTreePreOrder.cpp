#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* buildTree() {
    int d;
    cin >> d;
    if(d == -1) {
        return nullptr;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

int main() {
    return 0;
}