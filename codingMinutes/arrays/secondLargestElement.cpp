#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &v) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(auto number: v) {
        if(number>largest) {
            secondLargest = largest;
            largest = number;
        }
        else if(number > secondLargest) {
            secondLargest = number;
        }
    }
    return secondLargest;
}

int main() {
    vector<int> input = {2,3,10,-1,4,12};
    int output = secondLargest(input);
    cout << output << endl;
    return 0;
}