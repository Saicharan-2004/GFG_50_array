//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int helper(int coins[],int ind,int target,vector<vector<long long>>&dp)
    {
        if(ind==0)
        {
            if(target%coins[0]==0)
            {
                return 1;
            }
            return 0;
        }
        if(target<0)
        {
            return 0;
        }
        if(dp[ind][target]!=-1)
        {
            return dp[ind][target];
        }
        return dp[ind][target]=helper(coins,ind-1,target,dp)+helper(coins,ind,target-coins[ind],dp);
    }
    long long int count(int coins[], int N, int sum) 
    {
        vector<vector<long long>>dp(N,vector<long long>(sum+1,-1));
        return helper(coins,N-1,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends