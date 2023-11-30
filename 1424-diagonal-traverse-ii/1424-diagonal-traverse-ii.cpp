class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        unordered_map<int,vector<int>>map;
        int m=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                map[i+j].push_back(nums[i][j]);
                m=max(m,i+j);
            }
        }
        for(int i=0;i<=m;i++)
        {
            for(auto x:map[i])ans.push_back(x);
        }
        return ans;
        
    }
};