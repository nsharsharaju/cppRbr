#include<iostream>
using namespace std;

class A{
    public:
        int function(int x){
            return 2*x;
        }
        int function(int x, int y){
            return x+10*y;
        }
        char function(char x){
            return x+1;
        }
        double function(double x){
            return x;
        }
};

int main(){
    A a;
    cout<<a.function(123);
    cout<<a.function('a');
    cout<<a.function(12.4);
    cout<<a.function(4,5);
    return 0;
}