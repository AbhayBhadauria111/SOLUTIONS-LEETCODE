class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int>index;
        for(int i=0;i<nums.size();i++)
            if(target==nums[i])index.push_back(i);
        int ans=INT_MAX;
        for(auto x:index)ans=min(ans,abs(start-x));
        return ans;
        
    }
};