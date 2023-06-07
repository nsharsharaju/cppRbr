#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            left = nullptr;
            right = nullptr;
        }
};

Node* createNode(int data) {
    return new Node(data);
}

Node* createTree() {
    int d;
    cin >> d;
    if(d == -1) return nullptr;
    Node* root = createNode(d);
    root->left = createTree();
    root->right = createTree();
    return root;
}

void levelOrderTraversal(Node* base) {
    if(base == nullptr) return;

    queue<Node *> q;
    q.push(base);

    while(!q.empty()) {
        Node* root = q.front();
        q.pop();
        cout << root->data << " ";

        if(root->left) {
            q.push(root->left);
        }

        if(root->right) {
            q.push(root->right);
        }
    }
    return;
}

int main() {
    Node* root = createTree();
    levelOrderTraversal(root);
    return 0;
}