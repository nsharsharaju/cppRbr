#include<iostream>
using namespace std;

bool is_palindrome(string s){
    int i = 0, j = s.length()-1;
    while(i<j) {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cin>>str;
    cout<<is_palindrome(str)<<endl;
    return 0;
}