class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
     int i=0,j=0,ans=0,n=s.length(),numzeroes=0,numones=0;
        while(j<n)
        {
            while(s[j]=='0'){j++;numzeroes++;}
            while(s[j]=='1'){j++;numones++;}
            if(numzeroes==numones)ans=max(ans,j-i);
            else ans=max(ans,2*min(numzeroes,numones));
            numones=numzeroes=0;
            i=j;
        }
        return ans;
    }
};