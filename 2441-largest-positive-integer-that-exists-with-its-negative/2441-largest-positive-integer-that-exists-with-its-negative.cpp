class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int>N;
        for(int i:nums)
        {
            N.insert(i);
            }
        int ans=-1;
        for(auto i:nums)
            if(N.find(-i)!=N.end() and i>ans)ans=i;
        return ans;
    }
};