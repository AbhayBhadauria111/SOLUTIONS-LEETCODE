class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>A(nums.size(),0);
        if(nums[0]==1)A[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==0)continue;
            else
            {
                A[i]=A[i-1]+1;
            }
        }
        return *max_element(A.begin(),A.end());
    }
};