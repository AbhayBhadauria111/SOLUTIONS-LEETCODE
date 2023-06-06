class Solution {
    int find(int n,vector<int>&nums)
    {
        for(int i=0;i<nums.size();i++)if(nums[i]==n)return i;
        return -1;
    }
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int i=find(1,nums);
        int count=0;
        while(i!=0)
        {
            nums[i]=nums[i-1];
            i--;
            count++;
        }
        nums[0]=1;
        i=find(nums.size(),nums);
        // cout<<count;
        // for(auto x:nums)cout<<x<<" ";
        while(i+1<nums.size())
        {
            nums[i]=nums[i+1];
            i++;
            count++;
        }
        return count;
    }
};