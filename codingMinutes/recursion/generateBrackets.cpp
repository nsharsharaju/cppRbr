#include<bits/stdc++.h>
using namespace std;

void generateBrackets(int n,int o,int c,string output){
    if(output.length() == 2*n) {
        cout << output << endl;
        return;
    }
    if(o < n) {
        generateBrackets(n,o+1,c,output+'(');
    }
    if(c < o) {
        generateBrackets(n,o,c+1,output+')');
    }
    return;
}

int main(){
    int n;
    cin >> n;
    generateBrackets(n,0,0,"");
    return 0;
}