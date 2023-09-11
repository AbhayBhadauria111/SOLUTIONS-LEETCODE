class Solution {
    long long solve(int picked,int delivered,int n,map<pair<int,int>,int>&DP)
    {
        if(picked>n or delivered>n)return 0;
        if(picked==n and delivered==n)return 1;
        else
        {
            if(DP.find({picked,delivered})!=DP.end()){return DP[{picked,delivered}];}
            long long temp=(n-picked)*solve(picked+1,delivered,n,DP)%(1000000007);
            temp=(temp+(picked-delivered)*solve(picked,delivered+1,n,DP))%(1000000007);
            return DP[{picked,delivered}]=temp%(1000000007);
        }
    }
public:
    int countOrders(int n) {
        map<pair<int,int>,int>D;
        return solve(0,0,n,D);
    }
};