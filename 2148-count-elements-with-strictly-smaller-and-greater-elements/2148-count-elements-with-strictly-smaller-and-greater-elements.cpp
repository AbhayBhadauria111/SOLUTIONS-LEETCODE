class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,ans=0,n=nums.size(),j=n-1;
        while(j>=0 and nums[j]==nums[n-1])j--;
        while(i<n and nums[i]==nums[0])i++;
        if(j<i)return 0;
        return (j-i+1);
    }
};