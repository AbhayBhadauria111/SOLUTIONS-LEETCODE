class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind,int currsum,vector<int>& candidates,vector<int>comb,int target)
    {
        if(currsum==target)ans.push_back(comb);
        for(int i=ind;i<candidates.size();i++)
        {
            if(currsum+candidates[i]<=target)
            {
                comb.push_back(candidates[i]);
                currsum+=candidates[i];
                solve(i,currsum,candidates,comb,target);
                currsum-=candidates[i];
                comb.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,0,candidates,{},target);
        return ans;
    }
};