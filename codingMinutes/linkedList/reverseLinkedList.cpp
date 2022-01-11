#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNewNode(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertAtEnd(Node* head, int data) {
    if(head == NULL) return createNewNode(data);
    Node *trav = head;
    while(trav->next!=NULL) {
        trav = trav->next;
    }
    trav->next = createNewNode(data);
    return head;
}

void print(Node* head) {
    while(head!=NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* reverse(Node* head) {
    if(head==NULL) return head;
    Node* prev = NULL;
    Node* current = head;
    while(current!=NULL) {
        Node* temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

int main (){
    Node* head = NULL;
    head = insertAtEnd(head,1);
    head = insertAtEnd(head,2);
    head = insertAtEnd(head,3);
    head = insertAtEnd(head,4);
    head = insertAtEnd(head,5);
    head = reverse(head);
    print(head);
    return 0;
}