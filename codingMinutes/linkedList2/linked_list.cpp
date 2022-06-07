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

node* insertAtMiddle(node* head,int data, int pos) {
    if(pos == 0) {
        return insertAtHead(head,data);
    }
    node* trav = head;
    pos = pos - 1;
    while(pos--) {
        trav = trav->next;
    }
    node* newNode = new node(data);
    newNode->next = trav->next;
    trav->next = newNode;
    return head;
}

node* insertAtEnd(node* head,int data) {
    if(head == nullptr) {
        return new node(data);
    }
    node* trav = head;
    while(trav->next != nullptr) {
        trav = trav->next;
    }
    trav->next = new node(data);
    return head;
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
    head = insertAtMiddle(head,4,2);
    head = insertAtEnd(head,100);
    printLL(head);
    return 0;
}