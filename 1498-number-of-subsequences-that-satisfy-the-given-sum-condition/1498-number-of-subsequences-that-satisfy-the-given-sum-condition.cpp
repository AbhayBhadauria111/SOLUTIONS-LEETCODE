class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());  
        int n=nums.size();
        int ans=0;
        int i=0,j=n-1;
        vector<int>pow(n,1);
        for(int i=1;i<n;i++)
        {
            pow[i]=pow[i-1]*2%(1000000007);
        }
        while(i<n and j>=i)
        {
            while((target-nums[i])<nums[j] and j>i)j--;
            if(i==j and nums[i]+nums[j]>target)break;
            ans=(ans+pow[j-i])%(1000000007);
            // cout<<nums[i]<<" "<<nums[j]<<" "<<ans<<endl;
            i++;
        }
        return ans;
    }
};