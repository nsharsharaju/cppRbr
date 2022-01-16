#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        string key;
        Node* left;
        Node* right;

        Node(string key) {
            this->key = key;
            this->left = nullptr;
            this->right = nullptr;
        }
};

Node* buildTree(){
    string root;
    cin >> root;
    if(root=="-1") return NULL;
    queue<Node*> q;
    Node * n = new Node(root);
    q.push(n);
    while(!q.empty()) {
        Node* temp = q.front();
        string left,right;
        cin >> left >> right;
        if(left == "-1") {
            temp->left = nullptr;
        }
        else {
            Node * nL = new Node(left);
            temp->left = nL;
            q.push(nL);
        }
        if(right == "-1") {
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

int op(string s,int a, int b) {
    if(s == "+") return a+b;
    if(s == "-") return a-b;
    if(s == "*") return a*b;
    if(s == "/") return a/b;
    return 0;
}

int evalTree(Node *root) {
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr) return stoi(root->key);
    int left = evalTree(root->left);
    int right = evalTree(root->right);
    return op(root->key,left,right);
}

int main(){
    Node* root = buildTree();
    cout << evalTree(root) << endl;
    return 0;
}
