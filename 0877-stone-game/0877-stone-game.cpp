class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>DP(piles.size(),vector<int>(piles.size(),INT_MIN));
        int score=solve(0,piles.size()-1,piles,DP);
        if(score)return true;
        return false;
    }
private:
    int solve(int i,int j,vector<int>&piles,vector<vector<int>>&DP)
    {
        if(i==j)return piles[i];
        if(DP[i][j]!=INT_MIN)return DP[i][j];
        return DP[i][j]=max(piles[i]-solve(i+1,j,piles,DP),piles[j]-solve(i,j-1,piles,DP));
    }
};