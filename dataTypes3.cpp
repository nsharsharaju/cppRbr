#include<iostream>

using namespace std;

int myGlobalNum; // Global Integer Variable

int main() {
    int myNum;
    float myFloatNum = 4.9;
    double myDoubleNum = 3.9;
    char myLetter = 'J';
    bool myBoolean = true;
    string myText = "Hello";
    cout << "Default value of myNum is: " << myNum << endl;
    cout << "Default value of myGlobalNum is: " << myGlobalNum << endl;
    return 0;
}