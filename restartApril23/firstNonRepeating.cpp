#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingChar(string input)
{
    unordered_map<char, int> um;
    queue<char> q;

    for (auto ele : input)
    {

        if (um.find(ele) == um.end())
        {
            um[ele] = 1;
            q.push(ele);
        }
        else if (um[ele] != 2)
        {
            um[ele]++;
        }
        while (!q.empty())
        {
            if (um.find(q.front()) != um.end() && um[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                break;
            }
        }
    }
    if (!q.empty())
    {
        return q.front();
    }
    else
    {
        return '$';
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;
        char c = firstNonRepeatingChar(input);
        cout << c << endl;
    }
    return 0;
}