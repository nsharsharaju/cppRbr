#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    deque<int> q{1,2,3};
    q.push_back(4);
    q.push_front(5);
    for(auto it = q.begin(); it != q.end(); it++) {
        cout << *it << " ";
    }
     return 0;   
}