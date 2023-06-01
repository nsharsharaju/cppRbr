#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

Node* createNode(int data) {
    return new Node(data);
}

void inorder(Node* root) {
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    return;
}

Node *createTree()
{
    int d;
    cin >> d;
    if(d == -1) return nullptr;
    Node* base = createNode(d);
    queue<Node *> q;
    q.push(base);

    while(!q.empty()) {
        Node* root = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        
        if(l == -1) {
            root->left = nullptr;
        } else {
            Node* left = createNode(l);
            q.push(left);
            root->left = left;
        }

        if(r == -1) {
            root->right = nullptr;
        } else {
            Node* right = createNode(r);
            q.push(right);
            root->right = right;
        }
    }
    return base;
}

int main() {
    Node* root = createTree();
    inorder(root);
    return 0;
}