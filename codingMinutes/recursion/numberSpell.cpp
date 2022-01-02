#include<bits/stdc++.h>
using namespace std;

string helper(int n) {
    switch(n) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
    return "";
}

void numberSpell(int n) {
    if(n == 0) return;
    else{
        int digit = n%10;
        numberSpell(n/10);
        if(n/10 != 0)
            cout << " " << helper(digit) << " ";
        else
            cout << helper(digit) << " ";
        return;
    }
}

int main() {
    int n;
    cin >> n;
    numberSpell(n);
    cout << endl;
    return 0;
}