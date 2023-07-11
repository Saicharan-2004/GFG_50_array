//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        int final=0;
        unordered_map<int,int>temp;
        for(int i=0;i<n;i++)
        {
            int t=k-arr[i];
            if(temp.count(t)>0)
            {
                final+=temp[t];
            }
            temp[arr[i]]++;
        }
        
        return final;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends