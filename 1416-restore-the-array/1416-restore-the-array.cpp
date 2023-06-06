class Solution {
private:
    int solve(int ind,string &s,int &k,vector<int>&DP)
    {
        if(ind==s.size())return 1;
        else
        {
            if(s[ind]=='0')return 0;
            if(DP[ind]!=-1)return DP[ind];
            int count=0;
            int i=ind;
            while(i<s.size())
            {
                if(valid(s,ind,i,k))
                {
                    count=(count+solve(i+1,s,k,DP))%(1000000007);i++;
                }
                else
                {
                    break;
                }
            }
            return DP[ind]=count;
            
        }
    }
    bool valid(string &s,int &start,int &end,int &k)
    {
        if(stoll(s.substr(start,end-start+1))<=k)return true;
        return false;
    }
public:
    int numberOfArrays(string s, int k) {
        vector<int>DP(s.size(),-1);
        return solve(0,s,k,DP);
    }
};