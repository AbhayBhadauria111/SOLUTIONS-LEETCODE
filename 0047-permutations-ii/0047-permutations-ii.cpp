class Solution {
public:
    vector<vector<int>>ans;
    int n=0;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        unordered_map<int,int>count;
        for(int x:nums)count[x]++;
        vector<int>currperm;
        currperm.clear();
        solve(count,currperm);
        return ans;
    }
private:
    void solve(unordered_map<int,int>&count,vector<int>&currperm)
    {
        if(currperm.size()==n)ans.push_back(currperm);
        for(auto &x:count)
        {
            if(x.second>0)
            {
                x.second--;
                currperm.push_back(x.first);
                solve(count,currperm);
                currperm.pop_back();
                x.second++;
            }
        }
    }
};