#include<bits/stdtr1c++.h>
using namespace std;

void printQ(queue<int> q) {
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return;
}

queue<int> removeMultiplesOf3(queue<int> q) {
    queue<int> mq;
    while(!q.empty()) {
        if(q.front()%3!=0)
            mq.push(q.front());
        q.pop();
    }
    return mq;
}

int main(){
    queue<int> q1;
    for(int i=0;i<100;i+=10){
        q1.push(i);
    }

    // cout<<q1.size()<<endl;
    // printQ(q1);
    // printQ(q1);

    q1 = removeMultiplesOf3(q1);
    printQ(q1);

    return 0;
}