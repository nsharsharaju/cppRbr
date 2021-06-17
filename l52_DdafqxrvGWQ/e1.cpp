#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

class Compare{
    public:
        bool operator ()(int a, int b){
            return (a%3 > b%3);
        }
};


template <class T>
void display(priority_queue<T> q) {
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout<< endl;
    return;
}

void display(priority_queue<char, vector<char> , greater<char>> q) {
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout<< endl;
    return;
}

void display(priority_queue<int, vector<int> , Compare> q) {
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout<< endl;
    return;
}

int main(){
    priority_queue<int> q1;

    for(int i=1; i<10; i++)
        q1.push(i);

    display(q1);
    display(q1);

    priority_queue<string> q2;
    q2.push("ab");
    q2.push("xy");
    q2.push("bd");
    q2.push("aa");
    q2.push("AA");
    display(q2);

    priority_queue<char, vector<char>, greater<char>> q4;
    q4.push('a');
    q4.push('x');
    q4.push('b');
    q4.push('s');

    display(q4);

    priority_queue<int, vector<int>, Compare> q5;
    q5.push(10);
    q5.push(2);
    q5.push(20);
    q5.push(5);    
    display(q5);

    return 0;
}