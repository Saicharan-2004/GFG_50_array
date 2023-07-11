//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
        sort(arr.begin(),arr.end());
        long long ans=1;
        for(int i=0;i<n;i++)
        {
            if(arr[0]!=1)
            {
                return 1;
            }
            if(arr[i]>ans)
            {
                return ans;
            }
            ans+=arr[i];
        }
        return ans;
    } 
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 

// } Driver Code Ends