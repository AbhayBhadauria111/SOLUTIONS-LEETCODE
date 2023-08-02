class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>vis(nums.size(),false);
        return solve(nums,vis,nums.size());
    }
private:
    vector<vector<int>>solve(vector<int>&nums,vector<bool>&vis,int count)
    {
        if(count==0)return {{}};
        vector<vector<int>>ans;
        for(int i=0;i<vis.size();i++)
        {
            if(!vis[i])
            {
            vis[i]=true;
            vector<vector<int>>temp=solve(nums,vis,count-1);
            for(auto &x:temp)
                {
                    x.push_back(nums[i]);
                    ans.push_back(x);
                }  
            vis[i]=false;
              }
        }
        return ans;
        
    }
};