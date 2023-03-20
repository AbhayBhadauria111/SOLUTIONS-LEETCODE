class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int>V1(nums.size(),-1);
        vector<int>V2(nums.size(),-1);
        int ans=max(nums[0]+solve(nums,2,nums.size()-2,V1),solve(nums,1,nums.size()-1,V2));
        return ans;
    }
    int solve(vector<int>&nums,int curr,int end,vector<int>&V)
    {
        if(curr>=end+1)return 0;
        if(V[curr]!=-1)return V[curr];
        V[curr]=max(nums[curr]+solve(nums,curr+2,end,V),solve(nums,curr+1,end,V));
        return V[curr];
    }
};