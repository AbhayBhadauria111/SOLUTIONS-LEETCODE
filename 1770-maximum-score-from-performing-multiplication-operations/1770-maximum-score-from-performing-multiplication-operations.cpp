class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        vector<int>dp(multipliers.size()+1,0);
        int n=nums.size();
        for(int op=multipliers.size()-1;op>=0;op--)
        {
            for(int left=0;left<=op;left++)
            {
                dp[left]=max(multipliers[op]*nums[left]+dp[left+1],multipliers[op]*nums[n-1-(op-left)]+dp[left]);
            }
                
        }
        return dp[0];
    }
};