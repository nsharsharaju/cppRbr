#include<iostream>

using namespace std;

int main () {
    int a,b,avg;
    cout << "Calculate Average\n";
    cout << "Enter 1st Number: \n";
    cin >> a;
    cout << "Enter 2nd Number: \n";
    cin >> b;
    avg = (a+b)/2;
    cout << "The average of given two numbers " << avg;
    return 1;
}