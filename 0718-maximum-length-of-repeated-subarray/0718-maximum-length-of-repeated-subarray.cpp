class Solution {
    int n,m;
    int maxval=0;
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        n=nums1.size();m=nums2.size();
        vector<vector<int>>DP(n,vector<int>(m,-1));
        solve(0,0,nums1,nums2,DP);
        return maxval;
    }
    int solve(int i,int j,vector<int>& nums1, vector<int>& nums2, vector<vector<int>>&DP)
    {
        if(i>=n or j>=m)return 0;
        else
        {
            if(DP[i][j]!=-1)return DP[i][j];
             solve(i+1,j,nums1,nums2,DP);
            solve(i,j+1,nums1,nums2,DP);
            if(nums1[i]==nums2[j])DP[i][j]=1+solve(i+1,j+1,nums1,nums2,DP);
           else DP[i][j]=0;
            maxval=max(maxval,DP[i][j]);
            return DP[i][j];
        }
    }
};