#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

Node* insertNode(Node* head, int data) {
    if(head == nullptr) {
        return new Node(data);
    } else {
        Node* trav = head;

        while(trav->next!=nullptr) {
            trav = trav->next;
        }
        trav->next = new Node(data);
        return head;
    }
}

void printLL(Node* head) {
    Node* trav = head;

    while(trav!=nullptr) {
        cout << trav->data << "->";
        trav = trav->next;
    }
    cout << endl;
}

Node* reverseLL(Node* head) {
    if(head == nullptr || head->next == nullptr) return head;
    Node* prev = nullptr;
    Node* curr = head;

    while(curr->next!=nullptr) {
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    curr->next = prev;
    return curr;
}

int main() {
    Node* head = nullptr;
    head = insertNode(head,1);
    head = insertNode(head,2);
    head = insertNode(head,3);
    head = insertNode(head,4);
    head = insertNode(head,5);
    printLL(head);
    head = reverseLL(head);
    printLL(head);
    return 0;
}