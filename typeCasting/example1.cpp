//Concept of Little Indian and Big Indian are used here.

//Little Indian - Least Significant byte in Least Address

//Big Indian - Most Significant byte in Least Address.

//When typecasting least significant byte is taken.

#include<iostream>
using namespace std;
int main(){
    int a = 257;
    char ch = (char)a + 'a';
    cout<<ch<<endl;
    return 0;
}