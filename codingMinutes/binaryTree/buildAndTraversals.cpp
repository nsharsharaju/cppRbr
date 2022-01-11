#include<bits/stdc++.h>
using namespace std;

// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

void printPreOrder(Node *root) {
    if(root == nullptr) return;
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
    return;
}

void printInOrder(Node *root) {
    if(root == nullptr) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
    return;
}

void printPostOrder(Node* root) {
    if(root == nullptr) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
    return;
}

int main() {
    Node* root = buildTree();
    printPreOrder(root);
    cout << endl;
    printInOrder(root);
    cout << endl;
    printPostOrder(root);
    cout << endl;
    return 0;
}