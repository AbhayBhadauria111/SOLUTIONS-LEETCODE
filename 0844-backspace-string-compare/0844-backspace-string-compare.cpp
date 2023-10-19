class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>one,two;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(one.size())one.pop_back();
            }
            else
            {
                one.push_back(s[i]);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(two.size())two.pop_back();
            }
            else
            {
                two.push_back(t[i]);
            }
        }
        return one==two;
    }
};