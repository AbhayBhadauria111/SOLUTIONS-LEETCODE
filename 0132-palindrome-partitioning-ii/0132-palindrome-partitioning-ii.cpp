class Solution {
public:
    int minCut(string s) {
        int n=s.size();
        vector<vector<bool>>ispal(n,vector<bool>(n,false));
        for(int i=0;i<n;i++)
        {
            int left=i,right=i+1;
            while(left>=0 and right<n and s[left]==s[right])
            {
                ispal[left][right]=true;
                left--;right++;
            }
            left=i;right=i;
            while(left>=0 and right<n and s[left]==s[right])
            {
                ispal[left][right]=true;
                left--;right++;
            }
        }
        unordered_map<int,int>DP;
        return solve(0,s,ispal,DP)-1;
    }
private:
    int solve(int ind,string &s,vector<vector<bool>>&ispal,unordered_map<int,int>&DP)
    {
        if(ind==s.size())return 0;
        else
        {
            if(DP.find(ind)!=DP.end())return DP[ind];
            int ans=INT_MAX;
            for(int i=ind;i<s.size();i++)
            {
                if(ispal[ind][i])
                {
                    ans=min(ans,1+solve(i+1,s,ispal,DP));
                }
            }
            return DP[ind]=ans;
        }
    }
};