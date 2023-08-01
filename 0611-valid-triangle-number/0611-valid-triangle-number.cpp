class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,n=nums.size();
        for(int k=2;k<n;k++)
        {
            int j=k-1,i=0;
            while(i<j)
            {
                if(nums[i]+nums[j]>nums[k]){count+=j-i;j--;}
                else i++;
            }
        }
        return count;
    }
};