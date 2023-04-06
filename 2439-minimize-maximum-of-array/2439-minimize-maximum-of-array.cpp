class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long s=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            ans=max(ans,(s+i)/(i+1));
        }
        return (int)ans;
    }
};