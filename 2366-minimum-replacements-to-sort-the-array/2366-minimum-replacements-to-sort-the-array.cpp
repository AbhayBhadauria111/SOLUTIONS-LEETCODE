class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        int minmax=nums[n-1];
        for(int i=n-1;i>-1;i--)
        {
            int parts=ceil(nums[i]/(double)minmax);
            ans+=parts-1;
            minmax=nums[i]/parts;
        }
        return ans;
    }
};