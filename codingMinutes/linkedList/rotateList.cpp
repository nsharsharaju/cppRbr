#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

Node* createNode(int data) {
    return new Node(data);
}

Node* insertAtEnd(Node* head,int data) {
    if(head == nullptr) {
        return new Node(data);
    }

    Node* trav = head;
    while(trav->next!=nullptr) {
        trav = trav->next;
    }
    trav->next = new Node(data);
    return head;
}

void printLL(Node* head) {
    Node* trav = head;
    while(trav!=nullptr) {
        cout << trav->data << "->";
        trav = trav->next;
    }
    cout << endl;
    return;
}

Node* rotateRight(Node* head) {
    if(head == nullptr || head->next == nullptr) return head;;
    Node* trav = head;
    while(trav->next->next!=nullptr) {
        trav = trav->next;
    }
    Node* temp = trav->next;
    trav->next = nullptr;
    temp->next = head;
    return temp;
}

int findLength(Node* head) {
    int length = 0;
    Node* trav = head;
    while(trav!=nullptr) {
        trav= trav->next;
        length++;
    }
    return length;
}

int main() {
    Node* head = nullptr;
    head = insertAtEnd(head,1);
    head = insertAtEnd(head,2);
    head = insertAtEnd(head,3);
    printLL(head);
    head = rotateRight(head);
    printLL(head);
    return 0;
}