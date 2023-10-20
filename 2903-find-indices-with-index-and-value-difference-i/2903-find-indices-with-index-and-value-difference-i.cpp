class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>ans={-1,-1};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(abs(nums[i]-nums[j])>=valueDifference and abs(i-j)>=indexDifference)
                {
                    ans[0]=i;ans[1]=j;
                    return ans;
                }
            }
        }
        return {-1,-1};
            
    }
};