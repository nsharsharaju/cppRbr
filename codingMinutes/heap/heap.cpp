#include<bits/stdc++.h>
#include "heap.h"
using namespace std;

int main() {
    Heap h(10);
    h.push(3);
    h.push(2);
    h.push(1);
    h.push(200);
    h.push(0);
    while(!h.empty()) {
        cout << h.top() << " ";
        h.pop();
    }
    cout << endl;
}