class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>conver;
        long long m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            m=max(m,(long long)nums[i]);
            conver.push_back(nums[i]+m);
        }
        vector<long long>ans;
        for(int i=0;i<conver.size();i++)
        {
            if(i==0)ans.push_back(conver[i]);
            else
                {
                ans.push_back(conver[i-1]+conver[i]);
                conver[i]+=conver[i-1];
                }
        }   
        return ans;
    }
};