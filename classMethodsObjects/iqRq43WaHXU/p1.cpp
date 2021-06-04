#include<iostream>
using namespace std;

class myClass{
    char ch;
    int a, b;
    public:
        myClass(){
            cout<<"Default Constructor"<<endl;
        }
};

int main(){
    myClass obj;
    return 0;
}