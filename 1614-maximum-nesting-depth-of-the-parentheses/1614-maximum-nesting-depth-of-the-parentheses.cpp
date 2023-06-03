class Solution {
public:
    int maxDepth(string s) {
        stack<int>S;
        int ans=0,count=0;
        for(char c:s)
        {
            if(c=='(')
            {
                count+=1;
                S.push(count);
            }
            else if(c==')')
            {
                count-=1;
                ans=max(ans,S.top());S.pop();
            }
        }
        return ans;
    }
};