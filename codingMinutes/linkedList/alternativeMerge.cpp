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

//Assuming length of head1 = length of head2
Node * alternativeMerge(Node* head1, Node* head2) {
    Node* trav1 = head1;
    Node* trav2 = head2;
    while(trav1!=nullptr) {
        Node * temp = trav1->next;
        trav1->next = trav2;
        trav2->next = temp;
    }
}

int main (){
    Node* head1 = NULL;
    Node* head2 = NULL;
    head1 = insertAtEnd(head1,5);
    head1 = insertAtEnd(head1,7);
    head1 = insertAtEnd(head1,17);
    head1 = insertAtEnd(head1,11);
    head1 = insertAtEnd(head1,13);
    head2 = insertAtEnd(head2,12);
    head2 = insertAtEnd(head2,10);
    head2 = insertAtEnd(head2,2);
    head2 = insertAtEnd(head2,4);
    head2 = insertAtEnd(head2,6);
    print(head1);
    print(head2);
    return 0;
}