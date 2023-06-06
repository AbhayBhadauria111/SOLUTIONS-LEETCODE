class Solution {
private:
    long long solve(int ind,string &s,vector<int>&DP)
    {
        if(ind==s.size())return 1;
        else if(s[ind]=='0')return 0;
        else if(ind==s.size()-1)return (s[ind]=='*')? 9:1;
        else
        {
            if(DP[ind]!=-1)return DP[ind];
            long long a=0;
            if(s[ind]=='*')
            { 
                a=9*solve(ind+1,s,DP);
                if(s[ind+1]=='*')
                {
                    a+=15*solve(ind+2,s,DP);
                }
                else
                {
                   if(s[ind+1]<'7')
                   {
                       a+=2*solve(ind+2,s,DP);
                   }
                   else
                   {
                       a+=solve(ind+2,s,DP);
                   }
                }
            }
            else
            {
                a=solve(ind+1,s,DP);
                if(s[ind+1]=='*')
                {
                    if(s[ind]=='1')
                    {
                        a+=9*solve(ind+2,s,DP);
                    }
                    else if(s[ind]=='2')
                    {
                        a+=6*solve(ind+2,s,DP);
                    }
                }
                else
                {
                   if(s[ind]=='1' or (s[ind]=='2' and s[ind+1]<'7'))
                       a+=solve(ind+2,s,DP);
                }
            }
            return DP[ind]=(int)(a%(1000000007));
        }
    }
public:
    int numDecodings(string s) {
        vector<int>DP(s.size(),-1);
        return (int)solve(0,s,DP);
    }
};