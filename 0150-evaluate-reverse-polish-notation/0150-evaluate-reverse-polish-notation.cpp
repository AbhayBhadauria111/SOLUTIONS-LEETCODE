class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>S;
        vector<char>Signs={'+', '-', '*', '/'};
        bool flag=0;
        for(auto s:tokens)
        {
            flag=0;
            for(int i=0;i<4;i++)
            {
              if(Signs[i]==s[s.size()-1]){flag=1;break;}  
            }
            if(flag)
            {
                int b=(S.top());S.pop();
                int a=(S.top());S.pop();
                if(s[0]=='*')S.push(a*b);
                if(s[0]=='-')S.push(a-b);
                if(s[0]=='+')S.push(a+b);
                if(s[0]=='/')S.push(a/b);
            }
            else
            {
                S.push(stoi(s));
            }
        }
        return S.top();
        
    }
};