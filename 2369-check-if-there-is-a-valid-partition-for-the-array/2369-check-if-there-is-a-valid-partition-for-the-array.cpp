class Solution {
public:
    bool validPartition(vector<int>& nums) {
        unordered_map<int,bool>DP;
        return solve(0,nums,DP);
    }
private:
    bool solve(int ind,vector<int>&nums,unordered_map<int,bool>&DP)
    {
        if(ind>=nums.size())return true;
        else
        {
            if(DP.find(ind)!=DP.end())return DP[ind];
            bool a=false;
            if(ind+1<nums.size() and nums[ind]==nums[ind+1])a=a or solve(ind+2,nums,DP);
            if(ind+2<nums.size() and nums[ind]==nums[ind+1] and nums[ind]==nums[ind+2])a=a or solve(ind+3,nums,DP);
            if(ind+2<nums.size() and nums[ind]+1==nums[ind+1] and nums[ind]+2==nums[ind+2])a=a or solve(ind+3,nums,DP);
            return DP[ind]=a; 
        }
    }
};