#include<bits/stdc++.h>
#include "queue.h"
using namespace std;

int main() {
    Queue myqueue(7);

    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.pop();

    while(!myqueue.empty()) {
        cout << myqueue.getFront() << endl;
        myqueue.pop();
    }
}