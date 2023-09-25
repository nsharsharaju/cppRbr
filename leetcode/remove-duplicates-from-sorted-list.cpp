#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;
        ListNode(int x){
            val = x;
            next = NULL;
        }
};

ListNode* insertAtEnd(ListNode *head,int x){
    if(head == NULL){
        return new ListNode(x);
    }
    ListNode *temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = new ListNode(x);
    return head;
}

ListNode* removeDuplicates(ListNode *head) {
    if(head == nullptr || head->next == nullptr) return head;
    ListNode *trav = head;
    ListNode *newHead = nullptr;
    ListNode *newTail = nullptr;

    while(trav->next != nullptr){
        if(trav->val != trav->next->val) {
            if(newHead == nullptr) {
                newHead = new ListNode(trav->val);
                newTail = newHead;
            } else {
                newTail->next = new ListNode(trav->val);
                newTail = newTail->next;
            }
        }
        trav = trav->next;
    }

    if(newHead == nullptr) newHead = new ListNode(trav->val);
    else newTail->next = new ListNode(trav->val);
    return newHead;
}

void printLL(ListNode* head) {
    ListNode* trav = head;
    while(trav!=nullptr) {
        cout << trav->val << "->";
        trav = trav->next;
    }
    cout << endl;
    return;
}

int main(){
    ListNode* head = nullptr;
    head = insertAtEnd(head,1);
    head = insertAtEnd(head,1);
    head = insertAtEnd(head,2);
    head = removeDuplicates(head);
    printLL(head);
    return 0;
}