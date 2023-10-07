class Solution {
    int solve(int num,unordered_map<int,int>&DP)
    {
        if(num==2)return 1;
        else if(num==1)return 0;
        else
        {
            if(DP.find(num)!=DP.end())return DP[num];
            int temp=0;
            for(int i=1;i<=num-1;i++)
            {
                temp=max(temp,max(i*solve(num-i,DP),i*(num-i)));
            }
            return DP[num]=temp;
        }
    }
public:
    int integerBreak(int n) {
        unordered_map<int,int>DP;
        return solve(n,DP);
    }
};