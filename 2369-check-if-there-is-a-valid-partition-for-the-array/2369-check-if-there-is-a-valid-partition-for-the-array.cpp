class Solution {
private:
    bool valid(int start,int end,vector<int>&nums)
    {
        if(start+1==end and nums[start]==nums[end])return true;
        if(start+2==end and nums[start]==nums[start+1] and nums[start]==nums[end])return true;
        if(start+2==end and nums[start]+1==nums[start+1] and nums[start]+2==nums[start+2])return true;
        return false;
    }
    bool solve(int ind,vector<int>&nums,unordered_map<int,bool>&D)
    {
        if(ind==nums.size())return true;
        if(D.find(ind)!=D.end())return D[ind];
        for(int i=ind;i<=min((int)nums.size()-1,ind+2);i++)
        {
            if(valid(ind,i,nums) and solve(i+1,nums,D))return D[ind]=true;
        }
        return D[ind]=false;
    }
public:
    bool validPartition(vector<int>& nums) {
        unordered_map<int,bool>D;
       return solve(0,nums,D); 
    }
};