class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans=0;
        for(auto x:nums)ans=ans|x;
        return ans;
    }
};