class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int currcount=0;
        for(int x:nums)
        {
            if(x==1)currcount++;
            else
            {
                ans=max(ans,currcount);
                currcount=0;
            }
        }
        ans=max(ans,currcount);
        return ans;
    }
};