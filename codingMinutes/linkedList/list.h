class List;

class Node{
    int data;
public:
    Node* next;
    Node(int d):data(d),next(nullptr){}

    int getData() {
        return data;
    }

    ~Node() {
        if(next!=nullptr) {
            delete next;
        }
    }

    friend class List;
};

class List{
    Node * head;
    Node * tail;

    int searchHelper(Node* head, int key) {
        if(head == nullptr) return -1;
        else {
            if(head->data == key) {
                return 0;
            }
            else {
                int idx = searchHelper(head->next,key);
                if(idx == -1) return -1;
                else return 1+idx;
            }
        }
    }
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

    int search(int key) {
        Node *temp = head;
        int idx = 0;
        while(temp->next != nullptr) {
            if(temp->data == key) {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    int recursiveSearch(int key){
        int idx = searchHelper(head,key);
        return idx;
    }

    ~List() {
        if(head!=nullptr) {
            delete head;
            head == nullptr;
        }
    }
};