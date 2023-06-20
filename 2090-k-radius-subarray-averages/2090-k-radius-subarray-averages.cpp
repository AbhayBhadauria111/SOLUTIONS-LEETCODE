class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0)return nums;
        int n=nums.size();
        long long currsum=0;
        vector<int>ans(n,-1);
        for(int i=0;i<=2*k and i<nums.size();i++)
            currsum+=nums[i];
        for(int i=0;i<n;i++)
        {
            if(i<k or n-k<=i)
            {
                ans[i]=-1;
            }
            else
            {
                ans[i]=currsum/(2*k+1);
                if(i+k+1<n)
                currsum+=nums[i+k+1];
                currsum-=nums[i-k];
            }
        }
        return ans;
    }
};