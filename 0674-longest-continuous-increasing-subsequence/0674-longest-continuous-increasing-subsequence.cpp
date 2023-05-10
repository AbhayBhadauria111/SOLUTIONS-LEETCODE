class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       int ans=1;
        int i=0,j=1,n=nums.size();
        
        while(j<n)
        {
            if(nums[j]<=nums[i] or nums[j]<=nums[j-1])
            {
                i=j;
                j++;
            }
            else
            {
                ans=max(ans,j-i+1);j++;
            }
        }
        return ans;
    }
};