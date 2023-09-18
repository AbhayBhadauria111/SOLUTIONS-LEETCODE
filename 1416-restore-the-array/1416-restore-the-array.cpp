class Solution {
protected:
    int solve(int ind,string &s,int k,unordered_map<int,int>&DP)
    {
        if(ind==s.size())return 1;
        else
        {
            if(DP.find(ind)!=DP.end())return DP[ind];
            if(s[ind]=='0')return 0;
            long long temp=0;
            int ret=0;
            for(int i=ind;i<s.size();i++)
            {
                temp=temp*10+(s[i]-'0');
                if(temp>k)break;
                ret=(ret+solve(i+1,s,k,DP))%(1000000007);
            }
            return DP[ind]=(ret)%(1000000007);
        }
    }
public:
    int numberOfArrays(string s, int k) {
        unordered_map<int,int>DP;
        return solve(0,s,k,DP);
    }
};