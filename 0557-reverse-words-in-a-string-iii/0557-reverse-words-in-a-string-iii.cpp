class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<char>S;
        int i=0;
        while(i<s.size())
        {
            while(i<s.size() and s[i]!=' ')
            {
                S.push(s[i]);
                i++;
            }
            if(s[i]==' ')
            {
                while(!S.empty())
                {
                    ans+=S.top();S.pop();
                }
                i++;
                ans+=' ';
            }
        }
        while(!S.empty())
        {
            ans+=S.top();S.pop();
        }
        return ans;
        
    }
};