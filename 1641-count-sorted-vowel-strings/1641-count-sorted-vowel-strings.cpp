class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>>DP(n,vector<int>(5,0));
        return solve(0,0,n,DP);
    }
private:
    int solve(int curr,int last,int n,vector<vector<int>>&DP)
    {
        if(curr==n)return 1;
        else
        {
            if(DP[curr][last]!=0)return DP[curr][last];
            int temp=0;
            for(int i=last;i<5;i++)
            {
                temp+=solve(curr+1,i,n,DP);
            }
            return DP[curr][last]=temp;
        }
    }
};