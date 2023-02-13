class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        for(int i=0;i<nums.size();i++)
        {
            if(i+start<nums.size() and nums[i+start]==target)return i;
            if(start-i>=0 and nums[start-i]==target)return i;
        }
        return 0;
    }
};