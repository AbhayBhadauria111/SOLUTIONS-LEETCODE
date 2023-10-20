class Solution {
    int maxdigit(int num)
    {
        int ans=0;
        while(num>0)
        {
            ans=max(ans,num%10);
            num/=10;
        }
        return ans;
    }
public:
    int maxSum(vector<int>& nums) {
        int ans=-1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(maxdigit(nums[i])==maxdigit(nums[j]))
                {
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
    }
};