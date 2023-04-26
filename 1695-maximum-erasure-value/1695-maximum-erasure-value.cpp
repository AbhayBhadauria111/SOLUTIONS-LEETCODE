class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int s=0;
        int i,j;
        i=j=0;
        int ans=0;
        unordered_map<int,int>D;
        while(j<nums.size())
        {
            s+=nums[j];
            D[nums[j]]++;
            while(D[nums[j]]>1)
            {
                s-=nums[i];
                D[nums[i]]--;
                i++;
            }
            ans=max(ans,s);
            j++;
        }
        return ans;
    }
};