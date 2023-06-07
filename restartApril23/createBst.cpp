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

Node* createBst(Node* root, int data) {
    if(root == nullptr) return createNode(data);

    if (data < root->data) {
        root->left = createBst(root->left,data);
    } else {
        root->right = createBst(root->right,data);
    }
    return root;
}

void levelOrderTraversal(Node* base) {
    if(base == nullptr) return;

    queue<Node*> q;
    q.push(base);

    while(!q.empty()) {
        Node* root = q.front();
        q.pop();
        cout << root->data << " ";

        if(root->left!=nullptr) {
            q.push(root->left);
        }

        if(root->right!=nullptr) {
            q.push(root->right);
        }
    }

}

int main() {
    int n;
    Node* root = nullptr;
    cout << "Enter number of elements in BST" << endl;
    cin >> n;

    while (n--)
    {
        int e;
        cin >> e;
        root = createBst(root, e);
    }

    levelOrderTraversal(root);
    return 0;
}