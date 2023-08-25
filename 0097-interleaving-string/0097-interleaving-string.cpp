class Solution {
    bool solve(int i,int j,int k,string &s1,string &s2,string &s3,vector<vector<int>>&DP)
    {
        if(k==s3.size())return true;
        else
        {
            if(DP[i][j]!=-1)return DP[i][j]==1;
            bool a=false;
            if(j<s2.size() and s3[k]==s2[j])
                a=a or solve(i,j+1,k+1,s1,s2,s3,DP);
            if(i<s1.size() and s3[k]==s1[i])
                a=a or solve(i+1,j,k+1,s1,s2,s3,DP);
            if(a)DP[i][j]=1;
            else DP[i][j]=0;
            return a;  
        }
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())return false;
        vector<vector<int>>DP(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(0,0,0,s1,s2,s3,DP);
    }
};