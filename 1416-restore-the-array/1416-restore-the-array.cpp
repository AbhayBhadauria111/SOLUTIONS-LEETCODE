class Solution {
public:
    int numberOfArrays(string s, int k) {
        vector<int>DP(s.size()+1,0);
        DP[s.size()]=1;
        for(int i=s.size()-1;i>-1;i--)
        {
            if(s[i]=='0')DP[i]=0;
            else
            {
                long long temp=0;
                int ret=0;
                for(int j=i;j<s.size();j++)
                {
                    temp=temp*10+(s[j]-'0');
                    if(temp>k)break;
                    ret=(ret+DP[j+1])%(1000000007);  
                }
                DP[i]=ret;
            }
        }
        return DP[0];
    }
};