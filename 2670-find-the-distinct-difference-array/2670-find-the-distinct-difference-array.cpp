class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int>pre;
        unordered_map<int,int>suf;
        for(auto x:nums)suf[x]++;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            pre[nums[i]]--;
            if(pre[nums[i]]==0)pre.erase(nums[i]);
            suf[nums[i]]--;
            if(suf[nums[i]]==0)suf.erase(nums[i]);
            ans[i]=pre.size()-suf.size();
        }
        return ans;
    }
};