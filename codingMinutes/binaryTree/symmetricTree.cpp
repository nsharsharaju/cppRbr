#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int key;
        Node* left;
        Node* right;

        Node(int key) {
            this->key = key;
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

void makePreOrder(Node* root,vector<int> &v) {
    if(root == NULL) return;
    makePreOrder(root->left,v);
    v.push_back(root->key);
    makePreOrder(root->right,v);
    return;
}

void makeSymmetricPreOrder(Node* root, vector<int> &v) {
    if(root == NULL) return;
    makeSymmetricPreOrder(root->right,v);
    v.push_back(root->key);
    makeSymmetricPreOrder(root->left,v);
    return;
}

bool isSymmetric(Node* root) {
    vector<int> v1;
    vector<int> v2;
    makePreOrder(root,v1);
    makeSymmetricPreOrder(root,v2);
    if(v1.size() != v2.size()) return false;
    for(int i = 0;i<v1.size();i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main(){
    Node* root = buildTree();
    cout << isSymmetric(root) << endl;
    return 0;
}

//1 2 2 3 4 4 2 -1 -1 -1 -1 -1 -1 -1 -1