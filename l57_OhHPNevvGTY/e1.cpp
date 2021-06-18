#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

template<class T>
void display(stack<T> s){
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout << endl;
}

template<class T>
void displayEvery10(stack <T> s) {
    int c = 0;
    while(!s.empty()){
        if(c%10 == 0)
            cout << s.top() << " ";
        s.pop();
        c++;
    }
    cout << endl;
}

int main(){
    stack<int> s1;
    for(int i=0;i<100;i++){
        s1.push(i);
    }
    cout << s1.size() << endl;
    cout << s1.top() << endl;
    display(s1);
    displayEvery10(s1);
    return 0;
}