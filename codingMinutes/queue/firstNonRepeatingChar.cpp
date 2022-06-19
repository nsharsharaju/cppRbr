// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        unordered_map<char,int> um;
        queue<char> q;
        for(auto c: S) {
            if(um.find(c) == um.end()) {
                um[c] = 1;
            }
            else {
                um[c]++;
            }
            q.push(c);

            while(!q.empty() && um[q.front()]>1) {
                q.pop();
            }
        }

        if(q.empty()) {
            return '$';
        }
        else {
            return q.front();
        }
    }
};

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonrepeatingCharacter(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends