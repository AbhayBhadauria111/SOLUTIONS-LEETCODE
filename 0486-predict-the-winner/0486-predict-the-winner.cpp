class Solution {
private:
    int solve(vector<int>&nums,int i,int j)
    {
        if(i==j)return nums[i];
        return max((nums[i]-solve(nums,i+1,j)),nums[j]-solve(nums,i,j-1));
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        return solve(nums,0,nums.size()-1)>=0;
    }
};