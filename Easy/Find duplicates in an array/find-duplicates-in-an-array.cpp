//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        vector<int>dubs;
        unordered_map<int,int>temp;
        for(int i=0;i<n;i++)
        {
            temp[arr[i]]++;
        }
        for(auto it:temp)
        {
            if(it.second>1)
            {
                dubs.push_back(it.first);
            }
        }
        sort(dubs.begin(),dubs.end());
        if(dubs.empty())
            return {-1};
        return dubs;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends