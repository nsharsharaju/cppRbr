#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    queue<int> q;
    for(int i=0;i<100;i++) {
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}