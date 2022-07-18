#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if(n == 1) {
        cout << "Move Disc 1 from rod " << from << " to rod " << to << endl; 
        return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout << "Move Disc " << n << " from rod " << from << " to rod " << to << endl;
    towerOfHanoi(n-1,aux,to,from);
    return;
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n,'a','c','b');
    return 0;
}