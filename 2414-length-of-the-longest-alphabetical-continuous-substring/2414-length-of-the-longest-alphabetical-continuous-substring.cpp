class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0 or int(s[i])!=int(s[i-1])+1)
            {
                count=1;
            }
            else
            {
                count+=1;
                ans=max(ans,count);
            }
        }
        return ans;
    }
};