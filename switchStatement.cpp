#include<iostream>

using namespace std;

int main(){
    char input;
    cin>>input;
    switch (input)
    {
    case 'a':
        break;
        cout<<"I am a"<<endl;
    case 'b':
        cout<<"I am b"<<endl;
        break;
    case 'c':
        cout<<"I am c"<<endl;
        break;
    default:
        cout<<"I have no name :("<<endl; 
        break;
    }
    return 0;
}