//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int left=0;
 		int right=m-1;
 		int top=0;
 		int bottom=n-1;
 		int r=0;
 		while(left<=right&&top<=bottom)
 		{
 		    for(int i=left;i<=right;i++)
 		    {
 		        if(r==k-1)
 		        {
 		            return a[top][i];
 		        }
 		        r++;
 		    }
 		    top++;
 		    for(int i=top;i<=bottom;i++)
 		    {
 		        if(r==k-1)
 		        {
 		            return a[i][right];
 		        }
 		        r++;
 		    }
 		    right--;
 		    for(int i=right;i>=left;i--)
 		    {
 		        if(r==k-1)
 		        {
 		            return a[bottom][i];
 		        }
 		        r++;
 		    }
 		    bottom--;
 		    for(int i=bottom;i>=top;i--)
 		    {
 		        if(r==k-1)
 		        {
 		            return a[i][left];
 		        }
 		        r++;
 		    }
 		    left++;
 		}
    }



};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends