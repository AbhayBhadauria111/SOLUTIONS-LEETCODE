class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> map(101,0);
        for(auto x:nums)map[x]++;
        int ans=0;
        for(int i=k;i<101;i++)ans+=map[i]*map[i-k];
        return ans;
    }
};