//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int arr[],int n)
{
    int sum=0;
    int ans_sum=0;
    int final=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        ans_sum+=i*arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        ans_sum=ans_sum+sum-arr[i]-(n-1)*arr[i];
        final=max(final,ans_sum);
    }
    return final;
}