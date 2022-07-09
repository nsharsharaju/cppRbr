#include<bits/stdc++.h>
using namespace std;

int binaryStringToNum(string input) {
    int num = 0;
    int i = 0;

    for(int j=input.size()-1;j>=0;j--) {
        if(input[j] == '1') {
            num+= pow(2,i);
        }
        i++;
    }
    return num;
}

int main() {
    string input;
    cin >> input;
    cout << binaryStringToNum(input) << endl;
    return 0;
}