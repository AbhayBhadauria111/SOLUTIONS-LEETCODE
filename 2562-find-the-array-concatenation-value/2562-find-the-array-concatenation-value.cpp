class Solution {
public:
    long long concat(int a,int b)
    {
        return stoi(to_string(a)+to_string(b));
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int i=0,j=nums.size()-1;
        while(j-i>=1)
        {
            ans+=concat(nums[i],nums[j]);
            i++;
            j--;
        }
        if(j==i)
        {
            ans+=nums[i];
        }
        return ans;
    }
};