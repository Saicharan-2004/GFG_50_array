//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        vector<int>leftMin(n);
        vector<int>rightMax(n);
        int mini=arr[0];
        int prev=0;
        leftMin[0]=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<mini)
            {
                leftMin[i]=i;
                prev=i;
                mini=arr[i];
            }
            else
            {
                leftMin[i]=prev;
            }
        }
        int maxi=arr[n-1];
        prev=n-1;
        rightMax[n-1]=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>maxi)
            {
                rightMax[i]=i;
                prev=i;
                maxi=arr[i];
            }
            else
            {
                rightMax[i]=prev;
            }
        }
        int diff=INT_MIN;
        int i=0;
        int j=0;
        while(j<n&&i<n)
        {
            if(arr[leftMin[i]]<=arr[rightMax[j]])
            {
                diff=max(diff,j-i);
                j++;
            }
            else
            {
                i++;
            }
            
        }
        return diff;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends