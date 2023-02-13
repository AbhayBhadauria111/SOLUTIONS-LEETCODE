class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums,vector<int>curr,int start)
    {
        if(start==nums.size()){ans.push_back(curr);return;}
        solve(nums,curr,start+1);
        curr.push_back(nums[start]);
        solve(nums,curr,start+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,{},0);
        return ans;
    }
};