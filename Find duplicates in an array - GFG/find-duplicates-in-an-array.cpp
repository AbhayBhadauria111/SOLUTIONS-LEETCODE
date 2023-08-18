//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>ans;
        unordered_map<int,int>S;
        for(int i=0;i<n;i++)
        {
            S[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(S[arr[i]]>1)ans.push_back(arr[i]);
            S[arr[i]]=0;
        }
        if(!ans.size())return {-1};
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends