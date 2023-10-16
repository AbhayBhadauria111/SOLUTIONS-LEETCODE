class Solution {
    int solve(int pos,int steps,int arrlen,map<pair<int,int>,int>&tbl)
    {
        if(steps==0)
        {
            return pos==0;
        }
        else
        {
            if(tbl.find({pos,steps})!=tbl.end())return tbl[{pos,steps}];
            long long a=0,b=0,c=0;
            a=solve(pos,steps-1,arrlen,tbl)%(1000000007);
            if(pos<arrlen-1)b=solve(pos+1,steps-1,arrlen,tbl)%(1000000007);
            if(pos>0)c=solve(pos-1,steps-1,arrlen,tbl)%(1000000007);
            return tbl[{pos,steps}]=((a+b+c)%(1000000007));
        }
        
    }
public:
    int numWays(int steps, int arrLen) {
        map<pair<int,int>,int>tbl;
        return solve(0,steps,arrLen,tbl);
    }
};