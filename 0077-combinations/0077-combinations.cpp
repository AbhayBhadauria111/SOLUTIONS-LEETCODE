class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    vector<int>curr;
        solve(0,n,k,curr);
        return ans;
    }
private:
    vector<vector<int>>ans;
    void solve(int ind,int n,int k,vector<int>&curr)
    {
        if(curr.size()==k){ans.push_back(curr);return;}
        if(ind==n)return;
        for(int i=ind;i<n;i++)
        {
            curr.push_back(i+1);
            solve(i+1,n,k,curr);
            curr.pop_back();
        }
        
    }
};