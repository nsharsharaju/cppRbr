#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{
    vector<int> result = {};
    int index = -1;
    do
    {
        index = big.find(small, index + 1);
        if (index != -1)
            result.push_back(index);
    } while (index != -1);
    return result;
}

int main(){
    vector<int> output = stringSearch("I liked the movie, Acting in movie is great!","movie");
    for(auto e:output)
        cout << e << " ";
    cout << endl;
    return 0;
}