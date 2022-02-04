#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        else {
            string prevRes = countAndSay(n-1);
            string res = "";
            char prev = prevRes[0];
            int count = 1;
            for(int i=1;i<prevRes.size();i++) {
                if(prevRes[i] == prev) count++;
                else{
                    res = res+to_string(count);
                    res = res+prev;
                    prev = prevRes[i];
                    count = 1;
                }
            }
            res = res+to_string(count);
            res = res+prev;
            return res;
        }
    }
};

int main() {
    Solution s;
    cout << s.countAndSay(4) << endl;
    return 0;
}