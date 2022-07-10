// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        vector<vector<int>> res;
        vector<int> temp;
        int level = 0;
        int i = 1;
        for(int k=0;k<n;k++) {
            temp.push_back(arr[k]);
            i--;
            
            if(i==0) {
                level++;
                i = pow(2,level);
                sort(temp.begin(),temp.end());
                res.push_back(temp);
                temp.clear();
            }
        }
        if(temp.size()!=0) {
            sort(temp.begin(),temp.end());
            res.push_back(temp);
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal  // } Driver Code Ends