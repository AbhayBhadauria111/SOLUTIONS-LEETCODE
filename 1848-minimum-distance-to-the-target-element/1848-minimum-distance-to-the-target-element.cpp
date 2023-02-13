class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i=start,j=start;
        int ans=INT_MAX;
        while(i>=0)
        {
         if(nums[i]==target)ans=min(ans,abs(i-start));
            i--;
        }
        while(j<nums.size())
        {
            if(nums[j]==target)ans=min(ans,abs(j-start));
            j++;
        }
        return ans;
        
    }
};