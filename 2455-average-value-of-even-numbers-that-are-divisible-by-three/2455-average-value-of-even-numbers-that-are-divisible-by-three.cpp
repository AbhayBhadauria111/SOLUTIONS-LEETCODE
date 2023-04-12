class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(auto x:nums)if(x%6==0){count++;ans+=x;}
        if(count==0)return 0;
        return (float)ans/count;
    }
};