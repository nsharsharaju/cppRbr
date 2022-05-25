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

int descendantSum(Node* root){
    if(root == NULL) return 0;
    int leftSum = descendantSum(root->left);
    int rightSum = descendantSum(root->right);
    int descendantSum = leftSum + rightSum;
    int temp = root->data;
    if(root->left!= NULL || root->right!=NULL) root->data = descendantSum;
    return descendantSum+temp;
}

int main() {
    Node* root = buildTree();
    inOrder(root);
    descendantSum(root);
    inOrder(root);
    return 0;
}