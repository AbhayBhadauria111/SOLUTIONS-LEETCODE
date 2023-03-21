class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int i=0,j;
        while(i<nums.size())
        {
            if(nums[i]==0)
            {
                j=i+1;
                while(j<nums.size() and nums[j]==0)
                {
                    j++;
                }
                j--;
                ans+=(long long)(j-i+1)*(j-i+2)/2;
                i=j;
            }
            i++;
        }
        return ans;
    }   
};