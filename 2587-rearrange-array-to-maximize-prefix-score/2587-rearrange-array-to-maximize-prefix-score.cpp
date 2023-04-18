class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        long long p=0;
        int ans=0;
        for(auto x:nums)
        {
            p+=x;
            if(p>0)ans++;
        }
        return ans;
    }
};