#include<bits/stdc++.h>
using namespace std;

int convertToNum(int i,int j, int n) {
    return i*n + j + 1;
}

bool isValidStep(int i, int j, int n) {
    return i < n && j < n;
}

bool helper(int i,int j,vector<int> &path,vector<vector<char>> &c, int n) {
    //move right
    if(isValidStep(i,j+1,n)) {
        if(convertToNum(i,j+1,n) == n*n) {
            return true;
        }
        if(c[i][j+1] == 'X') {
            return false;
        } else {
            path.push_back(convertToNum(i,j+1,n));
            bool isPath = helper(i,j+1,path,c,n);
            if(isPath) return true;
            else {
                path.pop_back();
                return false;
            }
        }
    }

    //move down
}

vector<int> findPath(int n, vector<vector<char>> c){
    vector<int> path;
    path.push_back(convertToNum(0,0,n));
    bool isPath = helper(0,1,path,c,n);
    if(isPath) return path;
    helper(1,0,path,c,n);
    return path;
}

int main() {
    vector<vector<char>> c;
    c.push_back({'O','O','X','O'});
    c.push_back({'O','X','O','O'});
    c.push_back({'O','O','O','X'});
    c.push_back({'X','X','O','O'});
    vector<int> path = findPath(4,c);
    for(auto e:path) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}