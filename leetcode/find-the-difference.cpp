#include<bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t)
{
    unordered_map<char, int> um;

    for (int i = 0; i < s.size(); i++)
    {
        if (um.find(s[i]) == um.end())
        {
            um[s[i]] = 1;
        }
        else
        {
            um[s[i]]++;
        }
    }

    for (int i = 0; i < t.size(); i++)
    {
        if(um[t[i]] == 0) {
            return t[i];
        } else {
            um[t[i]]--;
        }
    }

    return '\0';
}

int main(){
    string s = "harsha";
    string t = "harshaa";
    char o = findTheDifference(s, t);
    cout<<o<<endl;
    return 0;
}