#include<bits/stdtr1c++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if( n < 4)
        cout << n << endl;
    else {
        deque<int> q;
        for(int i = 0; i < 4; i++)
            q.push_back(i);

        for(int i = 4; i<=n; i++) {
            int nthNumber = q[1] * q[2] * q[3];
            q.push_back(nthNumber);
            q.pop_front();
        }

        cout << q[3] << endl;
    }
    return 0;
}