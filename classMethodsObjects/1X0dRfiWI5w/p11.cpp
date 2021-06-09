#include<iostream>
using namespace std;

class A{
    public:
        int add(int x, int y, int z=0){
            return z+y+z;
        }
        int add(int x, int y){
            return x+y;
        }
};

int main(){
    int a = 2, b = 16, c = 1;
    A obj;
    cout<<obj.add(a,b,c)<<endl;
    cout<<obj.add(a,b)<<endl;
    return 0;
}