#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* insert(Node* root, int data) {
    if(root == nullptr) return new Node(data);
    if(data < root->data) root->left = insert(root->left,data);
    else root->right = insert(root->right,data);
    return root;
}

void inorder(Node* root) {
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node* root, int key) {
    if(root == nullptr) return false;
    if(key == root->data) return true;
    if(key < root->data) return search(root->left,key);
    return search(root->right,key);
}

int main() {
    int arr[] = {8,3,10,1,6,14,4,7,13};
    Node* root = nullptr;
    
    for(auto number: arr) {
        root = insert(root,number);
    }

    inorder(root);
    cout << endl;

    int n = 0;
    while(n!=-1){
        cin >> n;
        cout<< search(root,n) << endl;
    }
    return 0;
}