#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<string> v= {"geeksforgeeks", "geeks", "gek","gezer"};
    string output = "";
    bool flag = false;
    int i = 0;
    char prev;
    while(true) {
      for(int j=0;j<v.size();j++) {
        string s = v[j];
        if(i>=s.size()) {
        flag = true;
        break;
        }
        if(j == 0) prev = s[i];
        else {
          if(prev != s[i]) {
          flag = true;
          break;
          }
        }
        if(j == v.size()-1) {
          output+=prev;
          i++;
        }
      }
      if(flag == true) break;
    }
    cout << output << endl;
    
    return 0;
}