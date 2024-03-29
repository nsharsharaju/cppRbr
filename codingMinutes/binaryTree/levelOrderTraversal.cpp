#include<bits/stdc++.h>
using namespace std;

// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

vector<vector<int>> globalV;

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

void printLevelOrderTraversal(Node* root) {
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    return;
}

void printLevelOrderTraversalAdvanced(Node* root) {
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()) {
        Node *temp = q.front();
        if (temp == nullptr)
        {
            cout << endl;
            q.pop();
            if(!q.empty()) q.push(nullptr);
        }
        else
        {
            cout << temp->data << " ";
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return;
}

void printAllPaths(Node *root, vector<int> &v) {
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) {
        for(auto number: v) {
            cout << number << " ";
        }
        cout << root->data << " ";
        cout << endl;
        return;
    }
    v.push_back(root->data);
    printAllPaths(root->left,v);
    printAllPaths(root->right,v);
    v.pop_back();
    return;
}

void targetSumAllPaths(Node *root, vector<int> &v, int target) {
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) {
        vector<int> temp = v;
        temp.push_back(root->data);
        int sum = accumulate(temp.begin(),temp.end(),0);
        if(sum == target) {
            cout << "I am here" << endl;
            globalV.push_back(temp);
        }
        return;
    }
    v.push_back(root->data);
    targetSumAllPaths(root->left,v,target);
    targetSumAllPaths(root->right,v,target);
    v.pop_back();
}

int main(){
    Node* root = buildTree();
    printLevelOrderTraversal(root);
    cout << endl;
    printLevelOrderTraversalAdvanced(root);
    cout << endl;
    vector<int> v;
    printAllPaths(root,v);
    cout << endl;
    cout << "Target Path Start Here" << endl;
    targetSumAllPaths(root,v,7);
    for(auto v: globalV) {
        for(auto number: v) {
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}