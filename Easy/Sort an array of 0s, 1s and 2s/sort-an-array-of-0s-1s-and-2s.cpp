//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // int count0=0;
        // int count2=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]==0)
        //     {
        //         count0++;
        //     }
        //     if(arr[i]==2)
        //     {
        //         count2++;
        //     }
        // }
        int zero=0;
        int two=n-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                swap(a[i],a[zero]);
                zero++;
                // if(zero==count0)
                // {
                //     break;
                // }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                swap(a[i],a[zero]);
                zero++;
                // if(zero==count0)
                // {
                //     break;
                // }
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends