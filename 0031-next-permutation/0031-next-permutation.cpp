class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            for(int j=nums.size()-1;j>i;j--)
            {
                if(nums[j]>nums[i])
                {
                    int temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                    flag=1;
                    reverse(nums.begin()+i+1,nums.begin()+nums.size());
                    break;
                }
            }
            if(flag)break;
        }
        if(flag)return;
        sort(nums.begin(),nums.end());
        return;
    }
};