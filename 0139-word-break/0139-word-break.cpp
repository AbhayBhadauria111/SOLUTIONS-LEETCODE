class Solution {
private:
    bool solve(int ind,string &s,unordered_set<string>&Dict,unordered_map<int,bool>&DP)
    {
        if(ind==s.size())return true;
        else
        {
            if(DP.find(ind)!=DP.end())return DP[ind];
            string temp="";
            for(int i=ind;i<s.size();i++)
            {
                temp+=s[i];
                if(Dict.find(temp)!=Dict.end())
                {
                    if(solve(i+1,s,Dict,DP))return true;
                }
            }
            return DP[ind]=false;
        }
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>Dict(wordDict.begin(),wordDict.end());
        unordered_map<int,bool>DP;
        return solve(0,s,Dict,DP);
    }
};