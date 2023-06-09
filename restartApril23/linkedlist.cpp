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

int countNodes(Node* head) {
    int count = 0;
    Node* trav = head;
    while(trav!=nullptr) {
        count++;
        trav =  trav->next;
    }
    return count;
}

Node* reverseLL(Node* head) {
    if(head == nullptr || head->next == nullptr) return head;
    Node* prev = nullptr;
    Node* curr = head;
    Node* temp = nullptr;

    while(curr->next!=nullptr) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    curr->next = prev;
    return curr;
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
    head = reverseLL(head);
    printLL(head);
    cout << countNodes(head) << endl;
    return 0;
}