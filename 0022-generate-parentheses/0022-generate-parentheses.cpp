class Solution {
    vector<string>ans;
    void solve(int o,int c,string s,int n)
    {
        if(o==n and c==n)ans.push_back(s);
        else
        {
            string t=s;
            if(o<n)
            {
                o++;
                s+='(';
                solve(o,c,s,n);
                o--;
            }
            if(o>c)
            {
                c++;
                t+=')';
                solve(o,c,t,n);
            }   
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        ans.clear();
        solve(0,0,"",n);
        return ans;
    }
};