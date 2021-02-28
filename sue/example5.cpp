#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 0;
    double z = 0;
    try{
        if(y == 0) {
            throw "Division by zero condition";
        }
        z = x/y;
        cout << z << endl;
    }catch(const char* msg){
        cerr << msg << endl;
    }
}