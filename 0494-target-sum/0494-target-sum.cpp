class Solution {
private:
    int solve(int ind,vector<int>&nums,int target,map<pair<int,int>,int>&DP)
    {
        if(ind==nums.size())
        {
            if(target==0)return 1;
            else return 0;
        }
        else
        {
            if(DP.find({ind,target})!=DP.end())return DP[{ind,target}];
            return DP[{ind,target}]=solve(ind+1,nums,target+nums[ind],DP)+solve(ind+1,nums,target-nums[ind],DP);
        }
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
     map<pair<int,int>,int>DP;
     return solve(0,nums,target,DP);   
    }
};