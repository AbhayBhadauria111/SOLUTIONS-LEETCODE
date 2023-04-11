class Solution {
public:
    string removeStars(string s) {
        vector<char>S;
        int del=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*')
            {
                if(del==0)S.push_back(s[i]);
                else del--;
            }
            else
            {
                if(S.size()>=1)S.pop_back();
                else
                    del++;
            }
        }
        string ans="";
        for(auto x:S)ans+=x;
        return ans;
    }
};