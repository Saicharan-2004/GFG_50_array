//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool checker(int arr[],int k,long long int target,int n)
    {
        long long int current=0;
        int take=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>target)
            {
                return false;
            }
            else if(arr[i]+current<=target)
            {
                current+=arr[i];
            }
            else
            {
                current=arr[i];
                take++;
            }
        }
        if(take<=k)
            return true;
        return false;
    }
    long long helper(int arr[],int ind,int k,long long int sum,long long int maxi,int n)
    {
        long long int low=maxi;
        long long int high=sum;
        while(low<=high)
        {
            long long int mid=low+high;
            mid=mid/2;
            if(checker(arr,k,mid,n))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int maxi=arr[0];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        return helper(arr,n-1,k,sum,maxi,n);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends