//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // int countneg=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]>0)
        //     {
        //         countneg++;
        //     }
        // }
        // while(true)
        // {
        //     for(int j=0;j<n-1;j++)
        //     {
        //         if(arr[j]<0&&arr[j+1]>0)
        //         {
        //             swap(arr[j],arr[j+1]);
        //         }
        //     }
        //     if(arr[countneg]<0)
        //     {
        //         break;
        //     }
        // }
        vector<int> neg;
        vector<int>pos;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                neg.push_back(arr[i]);
            }
            else
            {
                pos.push_back(arr[i]);
            }
        }
        int i=0;
        while(i<pos.size())
        {
            arr[i]=pos[i];
            i++;
        }
        i=pos.size();
        while(i<pos.size()+neg.size())
        {
            arr[i]=neg[i-pos.size()];
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends