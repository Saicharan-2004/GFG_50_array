//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int helper(int i,int j,vector<vector<int>> arr,int n,vector<vector<int>>&dp)
    {
        if(j<0||j>n-1)
        {
            return -1e9;
        }
        if(i==0)
        {
            return dp[i][j]=arr[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int bottom=helper(i-1,j,arr,n,dp);
        int left=helper(i-1,j-1,arr,n,dp);
        int right=helper(i-1,j+1,arr,n,dp);
        return dp[i][j]=max(bottom,max(left,right))+arr[i][j];
    }
    int maximumPath(int n, vector<vector<int>> matrix)
    {
        int maxi=INT_MIN;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++)dp[0][i]=matrix[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int left=-1;
                if(j!=0)
                {
                    left=matrix[i][j]+dp[i-1][j-1];
                }
                int right=-1;
                if(j!=n-1)
                {
                    right=matrix[i][j]+dp[i-1][j+1];
                }
                int down=matrix[i][j]+dp[i-1][j];
                dp[i][j]=max(left,max(down,right));
            }
        }
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,dp[n-1][i]);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends