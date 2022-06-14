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

node* reverseLL(node* head) {
    if(head == nullptr) return head;
    node* newHead = reverseLL(head->next);
    head->next = nullptr;
    if(newHead == nullptr) return head;
    node* trav = newHead;
    while(trav->next!=nullptr) {
        trav = trav->next;
    }
    trav->next = head;
    return newHead;
}

node* reverseLLIter(node* head) {
    if(head == nullptr || head->next == nullptr) return head;
    node* prev = nullptr;
    node* curr = head;
    while(curr->next!=nullptr) {
        node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    curr->next = prev;
    return curr;
}

node* reverseLLK(node* head, int k) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }
    node* prev = nullptr;
    node* curr = head;
    while(curr->next!=nullptr) {}
}

node* merge(node* a, node* b) {
    //base case
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }

    node* c;
    if(a->data < b->data) {
        c = a;
        c->next = merge(a->next,b);
    }
    if(a->data > b->data) {
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}

int getMid(node* head) {
    if(head == nullptr) return 0;
    node* slowPtr = head;
    node* fastPtr = head;
    while(fastPtr->next!=nullptr && fastPtr->next->next!=nullptr) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr->data;
}

int main() {
    node* head = nullptr;
    head = insertAtHead(head,1);
    head = insertAtHead(head,2);
    head = insertAtHead(head,3);
    head = insertAtMiddle(head,4,2);
    head = insertAtEnd(head,100);
    printLL(head);
    head = reverseLL(head);
    printLL(head);
    head = reverseLLIter(head);
    printLL(head);


    node* a = nullptr;
    a = insertAtHead(a,5);
    a = insertAtHead(a,3);
    a = insertAtHead(a,1);

    node* b = nullptr;
    b = insertAtHead(b,6);
    b = insertAtHead(b,4);
    b = insertAtHead(b,2);

    printLL(a);
    printLL(b);

    node* c = merge(a,b);
    printLL(c);
    cout << getMid(c) << endl;

    return 0;
}