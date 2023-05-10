class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      vector<int>subs;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=lower_bound(subs.begin(),subs.end(),nums[i])-subs.begin();
            if(temp>=subs.size())
            {
                subs.push_back(nums[i]);
                ans=max(ans,(int)subs.size());
            }
            else
            {
                subs[temp]=nums[i];
                ans=max(ans,temp+1);
            }
        }
        return ans;   
    }
};