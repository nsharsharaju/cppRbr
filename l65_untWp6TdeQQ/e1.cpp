#include<bits/stdtr1c++.h>
using namespace std;

int main() {
    deque<int> q{1,2,3};
    for(int i=10;i<40;i+=10)
        q.push_front(i);

    cout << q.size() << endl;

    for(auto c:q){
        cout << c << " ";
    }
    cout<<endl;

    auto it = q.cbegin();
    it ++;
    cout << (*it) << endl;
    //(*it)++;  This is error
    
    deque <string> q2({"abc", "def", "gh"});

    //Stack using deque

    sort(q.begin(), q.end());
    for(auto c: q) {
        cout << c << " ";  
    }
    cout << endl;

    deque<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);

    while(!s.empty()) {
        cout << s.back() << " ";
        s.pop_back();
    }
    cout << endl;

    return 0;
}