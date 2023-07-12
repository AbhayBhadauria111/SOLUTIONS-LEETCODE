class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(divsum(mid,nums)<=threshold)high=mid;
            else low=mid+1;
        }
        return low;
    }
private:
    int divsum(int div,vector<int>&nums)
    {
        int ret=0;
        for(auto x:nums)ret+=ceil(x/(float)div);
        // cout<<div<<" "<<ret<<endl;
        return ret;
    }
};