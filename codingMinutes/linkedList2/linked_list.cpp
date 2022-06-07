#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

node* insertAtHead(node* head,int data) {
    if(head == nullptr) {
        return new node(data);
    }
    node* newNode = new node(data);
    newNode->next = head;
    return newNode;
}

void printLL(node* head) {
    if(head == nullptr) return;
    node* trav = head;

    while(trav!=nullptr) {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
    return;
}

int main() {
    node* head = nullptr;
    head = insertAtHead(head,1);
    head = insertAtHead(head,2);
    head = insertAtHead(head,3);
    printLL(head);
    return 0;
}