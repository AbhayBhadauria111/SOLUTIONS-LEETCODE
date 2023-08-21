class Solution {
    private:
    bool check(string temp,string s)
    {
        if(s.size()%temp.size()!=0)return false;
        int t=s.size()/temp.size();
        string s2="";
        while(t--)s2+=temp;
        return s2==s;
    }
public:
    bool repeatedSubstringPattern(string s) {
        string temp="";
        for(int i=0;i<s.size()/2;i++)
        {
            temp+=s[i];
            if(check(temp,s))return true;
        }
        return false;
    }
};