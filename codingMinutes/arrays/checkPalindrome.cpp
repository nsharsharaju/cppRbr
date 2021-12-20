#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    int i = 0;
    int j = n-1;
    bool isPalindrome = true;
    while(i<j) {
        if(str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    return isPalindrome;
}

int main() {
    string input;
    cin >> input;
    cout << isPalindrome(input) << endl; 
    return 0;
}