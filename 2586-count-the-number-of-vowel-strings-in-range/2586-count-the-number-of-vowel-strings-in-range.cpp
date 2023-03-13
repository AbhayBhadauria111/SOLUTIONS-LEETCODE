class Solution {
public:
    char a[5]={'a','e','i','o','u'};
    bool pass(string s)
    {
        bool c=false,b=false;
        for(int i=0;i<5;i++)
        {
            if(a[i]==s[0])c=true;
            if(a[i]==s[s.size()-1])b=true;
        }
        return c and b;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(pass(words[i]))ans++;
        }
        return ans;
    }
};