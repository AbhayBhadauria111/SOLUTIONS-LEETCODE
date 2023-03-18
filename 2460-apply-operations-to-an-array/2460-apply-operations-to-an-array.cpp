class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    nums[i]=nums[i]*2;
                    nums[i+1]=0;
                }
            }
        int c=0;
        for(auto x:nums)if(x==0)c++;
        for(int i=0;i<c;i++)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    int j=i;
                    while(j+1<n)
                    {
                        nums[j]=nums[j+1];
                        nums[j+1]=0;
                        j++;
                    }
                    break;
                }
            }
        
        }
        return nums;
    }
};