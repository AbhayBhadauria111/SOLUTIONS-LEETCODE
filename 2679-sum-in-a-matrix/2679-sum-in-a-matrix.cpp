class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size();
        for(auto &x:nums)
        {
            sort(x.begin(),x.end());
        }
        int ans=0,temp;
        for(int j=0;j<m;j++)
        {
            temp=0;
            for(int i=0;i<n;i++)
            {
              temp=max(temp,nums[i][j]);  
            }
            ans+=temp;
        }
        return ans;
    }
};