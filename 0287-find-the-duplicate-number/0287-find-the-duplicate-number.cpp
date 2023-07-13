class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            // for(auto x:nums)cout<<x<<" ";cout<<endl;
           nums[abs(nums[i])]=-nums[abs(nums[i])];
            if(nums[abs(nums[i])]>0)return abs(nums[i]);
        }
        return -1;
    }
};