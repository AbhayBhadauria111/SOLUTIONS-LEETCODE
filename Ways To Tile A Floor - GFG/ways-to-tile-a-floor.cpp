//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  unordered_map<int,int>D;
    long long numberOfWays(long long N) {
        //code here
        if(N==0)return 1;
        if(N<0)return 0;
        if(D[N]!=0)return D[N];
        D[N]=(numberOfWays(N-2)+numberOfWays(N-1))%(1000000000+7);
        return D[N];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends