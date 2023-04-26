//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        vector<int>ans(arr.size(),INT_MAX);
        stack<pair<int,int>>S;
        for(int i=0;i<arr.size();i++)
        {
            while(!S.empty() and S.top().first>=arr[i])S.pop();
            if(S.size()==0){
                S.push(make_pair(arr[i],i));
                continue;
            }
            else
            {
                ans[i]=S.top().second;
            }
            S.push(make_pair(arr[i],i));
        }
        while(!S.empty())S.pop();
        // for(auto x:ans)cout<<x<<" ";cout<<endl;
        for(int i=arr.size()-1;i>-1;i--)
        {
            while(!S.empty() and S.top().first>=arr[i])S.pop();
            if(S.size()==0){
                S.push(make_pair(arr[i],i));
                continue;
            }
            if(S.size()==0)
            {
                if(ans[i]==INT_MAX)ans[i]=-1;
                S.push(make_pair(arr[i],i));
                continue;
            }
            else
            {
                if(abs(S.top().second-i)<abs(i-ans[i]))
                {
                    ans[i]=S.top().second;
                }
                else if(abs(S.top().second-i)==abs(i-ans[i]))
                {
                    if(S.top().first<arr[ans[i]])ans[i]=S.top().second;
                }
            }
            S.push(make_pair(arr[i],i));
        }
        // for(auto x:ans)cout<<x<<" ";cout<<endl;
        for(int i=0;i<ans.size();i++)if(ans[i]==INT_MAX)ans[i]=-1;
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends