#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    deque<int> q{1,2,3};
    q.assign({4,5,6});
    q.insert(q.begin(),{7,8});
    q.erase(q.begin()+1,q.end()-3);
    for(auto it = q.begin(); it != q.end(); it++)
        cout << *it << " ";
    return 0;
}