#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree() {
    int n;
    cin>>n;
    if(n==-1) return NULL;
    Node* root = new Node(n);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* front = q.front();
        q.pop();
        int n;
        cin >> n;
        if(n == -1) {
            front->left = NULL;
        } else{
            Node* left = new Node(n);
            front->left = left;
            q.push(left);
        }
        cin >> n;
        if(n == -1) {
            front->right = NULL;
        } else {
            Node* right = new Node(n);
            front->right = right;
            q.push(right);
        }
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
    return;
}

void helper(Node* root,int k,int currD,vector<int> &v){
    if(root == NULL) return;
    if(currD == k) { 
        v.push_back(root->data);
        return;
    }
    helper(root->left,k,currD+1,v);
    helper(root->right,k,currD+1,v);
    return;
}

vector<int> Kdistance(Node *root, int k)
{
  vector<int> v;
  helper(root,k,0,v);
  return v;
}

int main() {
    Node* root = buildTree();
    inOrder(root);
    return 0;
}