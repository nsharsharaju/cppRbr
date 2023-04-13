#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

Node* createNode(int data) {
    return new Node(data);
}

Node* insertAtBegin(Node* head,int data) {
    if(head == nullptr) {
        return createNode(data);
    }
    Node *temp = head;
    head = createNode(data);
    head->next = temp;
    return head;
}

Node* insertAtEnd(Node* head,int data) {
    if(head == nullptr) {
        return createNode(data);
    }

    Node* trav = head;
    while(trav->next!=nullptr) {
        trav = trav->next;
    }

    trav->next = createNode(data);
    return head;
}

void printLL(Node* head) {
    if(head == nullptr) {
        return;
    }

    Node* trav = head;

    while(trav!=nullptr) {
        cout << trav->data << "->";
        trav = trav->next;
    }
    cout << endl;
    return;
}

int main() {
    Node* head = nullptr;
    head = insertAtBegin(head,1);
    head = insertAtBegin(head,2);
    head = insertAtBegin(head,3);
    head = insertAtBegin(head,4);
    head = insertAtBegin(head,5);
    head = insertAtEnd(head,6);
    head = insertAtEnd(head,7);
    head = insertAtEnd(head,8);
    head = insertAtEnd(head,9);
    head = insertAtEnd(head,10);
    printLL(head);
    return 0;
}