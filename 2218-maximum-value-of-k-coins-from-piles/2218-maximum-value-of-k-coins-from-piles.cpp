class Solution {
    int solve(int ind,int k,vector<vector<int>>&piles,vector<vector<int>>&tbl)
    {
        if(k==0)return 0;
        if(ind==piles.size())return INT_MIN;
        else
        {
            if(tbl[ind][k]!=-1)return tbl[ind][k];
            int temp=0;int ret=solve(ind+1,k,piles,tbl);
            for(int i=0;i<min(k,(int)piles[ind].size());i++)
            {
                temp+=piles[ind][i];
                ret=max(ret,temp+solve(ind+1,k-(i+1),piles,tbl));
            }
            return tbl[ind][k]=ret;
        }
    }
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<vector<int>>tbl(piles.size(),vector<int>(k+1,-1));
        return solve(0,k,piles,tbl);
    }
};