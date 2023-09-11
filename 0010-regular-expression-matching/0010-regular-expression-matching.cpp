class Solution {
    map<pair<int,int>,bool>DP;
    bool solve(int i,int j,string &s,string&p)
    {
        // cout<<i<<j<<endl;
        if(i<0 and j<0)return true;
        else if(j<0 and i>=0)return false;
        else
        {
            if(DP.find({i,j})!=DP.end())return DP[{i,j}];
            if(p[j]!='*' and p[j]!='.')
            {
                if(i<0)return false;
                if(s[i]!=p[j])return DP[{i,j}]=false;
                else return DP[{i,j}]=solve(i-1,j-1,s,p);
            }
            else
            {
                if(p[j]=='.')
                {
                    if(i<0)return false;
                    return DP[{i,j}]=solve(i-1,j-1,s,p);}
                else
                {
                    char curr=p[j-1];
                    // if(curr=='.')curr=s[i];
                    if(solve(i,j-2,s,p))return DP[{i,j}]=true;
                    while(i>-1 and (s[i]==curr or curr=='.'))
                    {
                        if(solve(i-1,j-2,s,p))return DP[{i,j}]=true;
                        i--;
                    }
                    return DP[{i,j}]=false;
                }
            }
        }
    }
public:
    bool isMatch(string s, string p) {
        DP.clear();
        return solve(s.size()-1,p.size()-1,s,p);
    }
};