#include<iostream>
using namespace std;

class myClass{
    public:
        char ch;
        int a,b;
        myClass(){
            a=0; b=0; ch='a';
        }
        myClass(char c){
            ch = c;
        }
        myClass(int x, int y){
            a = x;
            b = y;
        }
        void get(){
            cout<<a<<" "<<b<<" "<<ch<<endl; 
        }
};

int main(){
    myClass obj1, obj2('Z'), obj3(4,8);
    obj1.get();
    obj2.get(); //This will have garbage values
    obj3.get(); //This will have garbage values
    return 0;
}
