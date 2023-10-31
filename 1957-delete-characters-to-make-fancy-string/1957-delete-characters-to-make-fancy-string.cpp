class Solution {
public:
    string makeFancyString(string s) {
        vector<char>St;
        for(int i=0;i<s.size();i++)
        {
            if(St.size()<2)
            {
                St.push_back(s[i]);
            }
            else
            {
                if(St.size()>=2 and St.back()==s[i] and St[St.size()-2]==s[i])
                {
                    continue;
                }
                else
                {
                    St.push_back(s[i]);
                }
            }
        }
        string ans;
        for(auto x:St)ans+=x;
        return ans;
    }
};