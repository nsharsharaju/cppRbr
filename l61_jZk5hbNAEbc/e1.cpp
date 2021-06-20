#include <bits/stdtr1c++.h>
using namespace std;

void print(stack<string> &s)
{
    while (!s.empty())
    {
        string temp = s.top();
        s.pop();
        print(s);
        cout << temp << "/";
    }
}

void alter(stack<string> &s, string &x)
{
    if (x[0] == '/')
    {
        x = x.substr(1, x.length() - 1);
        while (!s.empty())
            s.pop();
        string curr = "";
        for (auto c : x)
        {
            if (c != '/')
            {
                curr += c;
            }
            else
            {
                if (curr == "..")
                    if (!s.empty())
                        s.pop();
                    else
                    {
                        s.push(curr);
                    }
                curr = "";
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    while (n--)
    {
        cin >> a;
        stack<string> s;
        if (a == "pwd")
        {
            cout << "/";
            stack<string> s2 = s;
            print(s);
            cout << endl;
        }
        else
        {
            cin >> b;
            alter(s, b);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}