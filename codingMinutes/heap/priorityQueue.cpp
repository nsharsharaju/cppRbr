#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,4,0,100,20,30};
    priority_queue<int,vector<int>,greater<int>> heap;
    for(auto e: arr) {
        heap.push(e);
    }
    while(!heap.empty()) {
        cout << heap.top() << " ";
        heap.pop();
    }
    cout << endl;
}