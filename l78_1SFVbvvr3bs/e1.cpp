#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first[] = {5, 10, 15, 20, 25};
    int second[] = {50, 40, 30, 20, 10};
    vector<int> v(10);
    vector<int>::iterator it;
    sort(first, first + 5);
    sort(second, second + 5);
    it = set_union(first, first + 5, second, second + 5, v.begin());
    v.resize(it - v.begin());
    for (it = v.begin(); it != v.end(); ++it)
        cout << " " << *it;
    return 0;
}