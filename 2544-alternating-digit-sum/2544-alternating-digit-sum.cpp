class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int>S;
        int ans=0;
        while(n)
        {
            S.push(n%10);
            n/=10;
        }
        int f=0;
        while(!S.empty())
        {
           if(!f)
           {
               ans+=S.top();
               S.pop();
               f=1;
           }
            else
            {
                ans-=S.top();S.pop();
                f=0;
            }
        }
            return ans;
    }
};