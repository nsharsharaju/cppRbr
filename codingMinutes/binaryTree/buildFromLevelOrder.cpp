#include<bits/stdc++.h>
using namespace std;

class Node {
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

Node* buildTree(){
    int root;
    cin >> root;
    if(root==-1) return NULL;
    queue<Node*> q;
    Node * n = new Node(root);
    q.push(n);
    while(!q.empty()) {
        Node* temp = q.front();
        int left,right;
        cin >> left >> right;
        if(left == -1) {
            temp->left = nullptr;
        }
        else {
            Node * nL = new Node(left);
            temp->left = nL;
            q.push(nL);
        }
        if(right == -1) {
            temp->right = nullptr;
        }
        else {
            Node * nR = new Node(right);
            temp->right = nR;
            q.push(nR);
        }
        q.pop();
    }
    return n;
}

void preOrderTraversals(Node* root) {
    if(root == nullptr) return;
    cout << root->data << " ";
    preOrderTraversals(root->left);
    preOrderTraversals(root->right);
}

int main() {
    Node* root = buildTree();
    preOrderTraversals(root);
    cout << endl;
}

// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1