#include<iostream>
using namespace std;

int main(){
    try{
        try{
            throw 2;
        }
        catch(int n){
            cout << "Inner Catch"<<endl;
        }
    }
    catch(int x){
        cout << "Outer Catch \n"<<endl;
    }
}