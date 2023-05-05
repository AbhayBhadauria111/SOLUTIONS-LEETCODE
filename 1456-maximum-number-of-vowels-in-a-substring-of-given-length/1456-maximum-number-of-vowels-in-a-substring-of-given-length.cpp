class Solution {
    char vow[5]={'a','e','i','o','u'};
    bool isvow(char c)
    {
        for(auto x:vow)
        {
            if(x==c)return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int count=0;
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        while(j<n)
        {
            if(j<k)
            {
                count+=isvow(s[j]);
                j++;
                ans=max(ans,count);
                // cout<<ans<<" ";
            }
            else
            {
                count+=-isvow(s[i])+isvow(s[j]);
                i++;
                j++;
                ans=max(ans,count);
                // cout<<ans<<" ";
            }
        }
        return ans;
    }
};