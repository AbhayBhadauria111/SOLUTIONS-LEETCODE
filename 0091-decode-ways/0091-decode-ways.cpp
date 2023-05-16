class Solution {
public:
    int numDecodings(string s) {
        vector<int>DP(s.size(),-1);
        return solve(0,s,DP);
    }
private:
    int solve(int ind,const string &s,vector<int>&DP)
    {
        if(ind==s.size())return 1;
        if(s[ind]=='0')return 0;
        if(DP[ind]!=-1)return DP[ind];
        int temp=0;
        temp=solve(ind+1,s,DP);
        if(ind+1<s.size())
        {
            if(s[ind]=='1' or (s[ind]=='2' and s[ind+1]<'7'))
            {
                temp+=solve(ind+2,s,DP);
            }
        }
        return DP[ind]=temp;
    }
};