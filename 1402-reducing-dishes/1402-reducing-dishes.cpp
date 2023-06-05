class Solution {
private:
    int solve(int ind,int chosen,vector<int>& satisfaction,vector<vector<int>>&DP)
    {
        if(ind==satisfaction.size())return 0;
        else
        {
            if(DP[ind][chosen]!=-1)return DP[ind][chosen];
            return DP[ind][chosen]=max(satisfaction[ind]*(chosen+1)+solve(ind+1,chosen+1,satisfaction,DP),solve(ind+1,chosen,satisfaction,DP));
        }
    }
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        vector<vector<int>>DP(satisfaction.size(),vector<int>(satisfaction.size(),-1));
        sort(satisfaction.begin(),satisfaction.end());
        return solve(0,0,satisfaction,DP);
    }
};