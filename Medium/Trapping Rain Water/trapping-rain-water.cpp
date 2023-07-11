//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
        int leftT[n];
        int rightT[n];
        int maxi=arr[0];
        leftT[0]=arr[0];
        rightT[n-1]=arr[n-1];
        int maxii=arr[n-1];
        for(int i=1;i<n;i++)
        {
            maxi=max(arr[i],maxi);
            leftT[i]=maxi;
        }
        for(int i=n-2;i>=0;i--)
        {
            maxii=max(arr[i],maxii);
            rightT[i]=maxii;
        }
        long long waterStored=0;
        for(int i=0;i<n;i++)
        {
            if(leftT[i]>arr[i])
            {
                if(rightT[i]>arr[i])
                {
                    waterStored+=leftT[i];
                    if(rightT[i]<leftT[i])
                    {
                        waterStored=waterStored+rightT[i]-leftT[i];
                    }
                    waterStored-=arr[i];
                }
            }
        }
        return waterStored;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends