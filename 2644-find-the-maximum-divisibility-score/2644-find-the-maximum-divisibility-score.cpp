class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
       vector<int>ans={0,-1};
        int count;
        for(int i=0;i<divisors.size();i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]%divisors[i]==0)count++;
            }
            if(count>ans[1])ans={divisors[i],count};
            else if(count==ans[1])ans[0]=min(ans[0],divisors[i]);
        }
        return ans[0];
    }
};