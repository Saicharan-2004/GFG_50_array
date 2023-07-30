//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int arr1[], int arr2[], int n, int m)
    {
        int start1=0;
        int start2=0;
        int sum1=0;
        int sum2=0;
        int ans=0;
        while(start1<n&&start2<m)
        {
            if(arr1[start1]<arr2[start2])
            {
                sum1+=arr1[start1];
                start1++;
            }
            else if(arr1[start1]==arr2[start2])
            {
                ans+=arr1[start1]+max(sum2,sum1);
                sum1=0;
                sum2=0;
                start2++;
                start1++;
            }
            else
            {
                sum2+=arr2[start2];
                start2++;
            }
            
        }
        while(start1<n)
        {
            sum1+=arr1[start1];
            start1++;
        }
        while(start2<m)
        {
            sum2+=arr2[start2];
            start2++;
        }
        return ans+max(sum1,sum2);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends