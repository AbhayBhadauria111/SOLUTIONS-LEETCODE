class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int>DP;
        return solve(0,0,nums,target,DP);
    }
private:
    int solve(int ind,int curr,vector<int>&nums,int target,map<pair<int,int>,int>&DP)
    {
        if(ind==nums.size())return curr==target;
        else{
            if(DP.find({ind,curr})!=DP.end())return DP[{ind,curr}];
            return DP[{ind,curr}]=solve(ind+1,curr+nums[ind],nums,target,DP)+solve(ind+1,curr-nums[ind],nums,target,DP);
        }
    }
};