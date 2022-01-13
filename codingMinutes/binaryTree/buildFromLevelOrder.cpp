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

int height(Node* root) {
    if(root == nullptr) return 0;
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1+max(h1,h2);
}

int sumBT(Node* root) {
    if(root == nullptr) return 0;
    int sum1 = sumBT(root->left);
    int sum2 = sumBT(root->right);
    return sum1 + sum2 + root->data;
}

vector<int> getKthLevel(Node* root, int k){
    if(root == nullptr) return {};
    if(k == 0) return {root->data};
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    while(!q.empty()) {
        Node * temp = q.front();
        if(temp == NULL) {
            level++;
            if(level == k+1) break;
            q.pop();
            if(!q.empty()) q.push(NULL);
        }
        else {
            if(level == k) {
                ans.push_back(temp->data);
            }
            else {
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            q.pop();
        }
    }
    return ans;
}

int main() {
    Node* root = buildTree();
    preOrderTraversals(root);
    cout << endl;
    cout << height(root) << endl;
    cout << sumBT(root) << endl;
    vector<int> ans = getKthLevel(root,3);
    for(auto number: ans) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}

// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1