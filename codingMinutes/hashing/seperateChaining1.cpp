#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = nullptr;
    return temp;
}

namespace myStd
{
    int hash(int n)
    {
        return n % 10;
    }
}

void insertNode(Node *arr[], int index, int data) {
    if(arr[index] == nullptr) {
        arr[index] = createNode(data);
        return;
    } else {
        Node* trav = arr[index];
        while(trav->next!=nullptr) {
            trav = trav->next;
        }
        trav->next = createNode(data);
        return;
    }
}

void printLL(Node* head) {
    if(head!=nullptr) {
        Node* trav = head;
        while(trav!=nullptr) {
            cout << trav->data << " ";
            trav = trav->next;
        }
    }
    cout << endl;
}

void printHash(Node* arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << i << " -> ";
        printLL(arr[i]);
    }
    return;
}

bool searchHash(Node* arr[],int data) {
    int index = myStd::hash(data);
    Node* trav = arr[index];
    while(trav!=nullptr) {
        if(trav->data == data) {
            return true;
        }
        trav = trav->next;
    }
    return false;
}

int main() {
    Node* arr[10];
    fill(arr,arr+10,nullptr);
    for (int i=0;i<10;i++) {
        int data = i*i;
        int index = myStd::hash(data);
        insertNode(arr,index,data);
    }
    //printHash(arr,10);
    while(true) {
        int i;
        cin >> i;
        if(i ==-1) break;
        cout << searchHash(arr,i) << endl;
    }
    return 0;
}