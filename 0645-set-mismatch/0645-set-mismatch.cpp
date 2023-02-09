class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        for(auto x:nums)arr[x-1]++;
        vector<int>ans(2,0);
        for(int x=0;x<arr.size();x++)
        {
            if(arr[x]==0)ans[1]=x+1;
            if(arr[x]==2)ans[0]=x+1;
            if(ans[0]!=0 && ans[1]!=0)break;
        }
        return ans;
        
    }
};