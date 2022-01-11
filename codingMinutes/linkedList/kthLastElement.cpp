#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNewNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node *insertAtEnd(Node *head, int data)
{
    if (head == NULL)
        return createNewNode(data);
    Node *trav = head;
    while (trav->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = createNewNode(data);
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int kthLastElement(Node *head, int k)
{
    if (head == nullptr)
        return -1;
    Node *trav = head;
    Node *main = head;
    for (int i = 1; i < k; i++)
    {
        trav = trav->next;
    }
    while (trav->next != nullptr)
    {
        main = main->next;
        trav = trav->next;
    }
    return main->data;
}

int main()
{
    Node *head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 6);
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 8);
    print(head);
    int n;
    cin >> n;
    cout << kthLastElement(head,n) << endl;
    return 0;
}