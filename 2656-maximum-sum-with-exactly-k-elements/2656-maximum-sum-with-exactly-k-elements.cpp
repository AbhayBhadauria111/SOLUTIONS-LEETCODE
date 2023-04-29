class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int m=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(k)
        {
            ans+=m;
            m++;
            k--;
        }
        return ans;
        
    }
};