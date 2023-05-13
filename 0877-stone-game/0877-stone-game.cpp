class Solution {
    vector<vector<int>>DP;
public:
    bool stoneGame(vector<int>& piles) {
        DP.resize(piles.size(),vector<int>(piles.size(),-1));
        int s=accumulate(piles.begin(),piles.end(),0);
        int alice=solve(0,piles.size()-1,piles);
        if(alice>s/2)return true;
        return false;
    }
private:
    int solve(int i,int j,vector<int>&piles)
    {
        if(i>=j)return 0;
        else
        {
            if(DP[i][j]!=-1)return DP[i][j];
            return DP[i][j]=max({piles[i]+solve(i+2,j,piles),piles[i]+solve(i+1,j-1,piles),piles[j]+solve(i+1,j-1,piles),piles[j]+solve(i,j-2,piles)});
        }
    }
};