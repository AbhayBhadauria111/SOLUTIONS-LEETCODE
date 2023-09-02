class Solution {
    int solve(int ind,string &s,unordered_set<string>&dict,vector<int>&dp)
    {
        if(ind==s.size())return 0;
        else
        {
            if(dp[ind]!=-1)return dp[ind];
            int ans=INT_MAX;
            string temp="";
            for(int i=ind;i<s.size();i++)
            {
                temp+=s[i];
                if(dict.find(temp)!=dict.end())
                    ans=min(ans,+solve(i+1,s,dict,dp));
                else
                    ans=min(ans,i-ind+1+solve(i+1,s,dict,dp));
            }
            return dp[ind]=ans;
        }
    }
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string>dict(dictionary.begin(),dictionary.end());
        vector<int>dp(s.size(),-1);
        return solve(0,s,dict,dp);
    }
};