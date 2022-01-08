class List;

class Node{
    int data;

public:
    Node* next;
    Node(int d):data(d),next(nullptr){}

    int getData() {
        return data;
    }

    friend class List;
};

class List{
    Node * head;
    Node * tail;
public:
    List():head(nullptr),tail(nullptr){}

    Node* begin() {
        return head;
    }

    void push_front(int data) {
        if(head==nullptr){
            Node* n = new Node(data);
            head = tail = n;
        } 
        else {
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data) {
        if(head==nullptr){
            Node* n = new Node(data);
            head = tail = n;
        }
        else {
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos) {
        if(pos == 0) {
            push_front(data);
        }
        else {
            Node * n = new Node(data);
            Node *temp = head;
            for(int jump = 1;jump<=pos-1;jump++) {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
        return;
    }
};