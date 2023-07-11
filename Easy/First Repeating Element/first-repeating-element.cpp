//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        unordered_set<int>temp;
        vector<int>pusher;
        for(int i=n-1;i>=0;i--)
        {
            if(temp.find(arr[i])==temp.end())
            {
                temp.insert(arr[i]);
            }
            else
            {
                pusher.push_back(i+1);
            }
        }
        if(pusher.empty())
            return -1;
        return pusher.back();
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends