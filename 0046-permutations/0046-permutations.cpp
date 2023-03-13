class Solution {
public:
    vector<bool>visited;
    vector<vector<int>>ans;
    void solve(vector<int>& nums,vector<int>curr)
    {
        if(curr.size()==nums.size())ans.push_back(curr);
        else
        {
         
            for(int i=0;i<nums.size();i++)
                if(visited[i]==false)
                {
                    curr.push_back(nums[i]);
                    visited[i]=true;
                    solve(nums,curr);
                    visited[i]=false;
                    curr.pop_back();
                }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)visited.push_back(false);
        solve(nums,{});
     return ans;   
    }
};