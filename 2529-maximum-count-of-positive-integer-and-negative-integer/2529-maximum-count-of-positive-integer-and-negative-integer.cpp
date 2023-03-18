class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int firstpos=INT_MIN;
        int lastneg=INT_MIN;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]>0)
            {firstpos=mid;
             j=mid-1;}
            else
            {
                i=mid+1;
            }
        }
        i=0;j=nums.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]<0)
            {
                lastneg=mid;
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        int ans=max(int(nums.size()-firstpos),int(lastneg+1));
        if(ans<=0)return 0;
        return ans;
    }
};