#include<bits/stdc++.h>
using namespace std;

void generateSubSequences(string input, string output, vector<string> &result)
{
    if (input.length() == 0)
    {
        result.push_back(output);
        return;
    }
    char ch = input[0];
    generateSubSequences(input.substr(1), output+ch, result);
    generateSubSequences(input.substr(1), output, result);
    return;
}

int main(){
    vector<string> result;
    generateSubSequences("abc","",result);
    for(auto e:result) {
        cout << e << endl;
    }
    return 0;
}