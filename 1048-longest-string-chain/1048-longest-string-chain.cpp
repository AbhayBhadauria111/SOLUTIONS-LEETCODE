class Solution {
    bool valid(const string &A,const string &B)
    {
        if(B.size()!=A.size()+1)return false;
        int i=0,j=0;
        bool flag=0;
        while(i<A.size())
        {
            if(A[i]!=B[j])
            {
                if(flag)return false;
                j+=1;
                flag=1;
            }
            else
            {
                i++;j++;
            }
        }
        if(j<B.size() and flag)return false;
        return true;
    }
    int solve(const string &last,const vector<string>&words,vector<bool>&taken)
    {
        if(DP.find(last)!=DP.end())return DP[last];
        int ret=0;
        for(int i=0;i<words.size();i++)
        {
            if(!taken[i] and valid(last,words[i]))
            {
                taken[i]=true;
                ret=max(ret,solve(words[i],words,taken));
                taken[i]=false;
            }
        }
        return DP[last]=ret+1;
    }
    unordered_map<string,int>DP;
public:
    int longestStrChain(vector<string>& words) {
        int ans=0;
        DP.clear();
        vector<bool>taken(words.size(),false);
        for(int i=0;i<words.size();i++)
        {
            taken[i]=true;
            ans=max(ans,solve(words[i],words,taken));
            taken[i]=false;
        }
        return ans;
    }
};