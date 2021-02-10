#include<string>
#include<iostream>
using namespace std;

int main() {
    string firstName = "Alice";
    string lastName = "Cooper";
    string name = firstName + ' ' + lastName;
    cout<<name.find("Coop")<<endl;
    cout<<name.length()<<endl;
    cout<<name.substr(2,3)<<endl;
    return 0;
}