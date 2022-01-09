#include<iostream>
#include "list.h"
using namespace std;

int main() {
    List l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.insert(10,1);
    l.insert(9,1);
    l.pop_front();

    Node * head = l.begin();
    while(head!=NULL) {
        cout << head->getData()<<"->";
        head = head->next;
    }
    cout <<"NULL"<<endl;
    cout << l.search(10) << endl;
    cout << l.recursiveSearch(10) << endl;
    return 0;
}