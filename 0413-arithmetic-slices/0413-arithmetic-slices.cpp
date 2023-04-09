class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        vector<int>diff;
        for(int i=1;i<nums.size();i++)
            diff.push_back(nums[i]-nums[i-1]);
        int i=0,j=1;
        while(j<diff.size())
        {
            while(j<diff.size() and diff[i]==diff[j])j++;
            count+=(j-i-1)*(j-i)/2;
            i=j;
        }
        return count;
    }
};