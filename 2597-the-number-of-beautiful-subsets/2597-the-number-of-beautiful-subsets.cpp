class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
       unordered_map<int,int>Count;
        return solve(nums,Count,k,0)-1;
    }
    int solve(vector<int>& nums,unordered_map<int,int>&Count,int k,int i)
    {
        if(i>=nums.size())return 1;
        else
        {
            int temp=solve(nums,Count,k,i+1);
            if(Count[nums[i]-k]<1 and Count[nums[i]+k]<1)
            {
                Count[nums[i]]+=1;
                temp+=solve(nums,Count,k,i+1);
                Count[nums[i]]-=1;
            }
            return temp;
        }
    }
    
};