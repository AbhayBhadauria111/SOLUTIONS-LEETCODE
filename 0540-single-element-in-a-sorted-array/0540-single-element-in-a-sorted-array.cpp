class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=(nums.size()-1)/2;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[2*mid]!=nums[2*mid+1])high=mid;
            else low=mid+1;
        }
        return nums[2*low];
    }
};