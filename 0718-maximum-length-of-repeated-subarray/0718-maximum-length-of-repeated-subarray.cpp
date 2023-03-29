class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),DP[n+1][m+1];
        memset(DP,0,sizeof(int)*(n+1)*(m+1));
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    DP[i][j]=1+DP[i-1][j-1];
                }
                else
                {
                    DP[i][j]=0;
                }
                ans=max(ans,DP[i][j]);
            }
        }
        return ans;
    }
};