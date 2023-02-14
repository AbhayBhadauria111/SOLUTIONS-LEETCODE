class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxarray(n,-1),minarray(n,-1);
        minarray[n-1]=nums[n-1];
        maxarray[0]=nums[0];
        for(int i=1;i<n-1;i++)
        {
            if(minarray[n-i]>nums[n-i-1])minarray[n-i-1]=nums[n-i-1];
            else minarray[n-i-1]=minarray[n-i];
            if(maxarray[i-1]<nums[i])maxarray[i]=nums[i];
            else maxarray[i]=maxarray[i-1];
        }
        for(int i=0;i<n-1;i++)
            if(maxarray[i]<=minarray[i+1])return i+1;
        return 0;
    }
};