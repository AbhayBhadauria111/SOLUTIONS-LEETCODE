class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int r,l;
        l=0;
        r=accumulate(nums.begin(),nums.end(),0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            r-=nums[i];
            ans.push_back(abs(r-l));
            l+=nums[i];
        }
        return ans;
    }
};