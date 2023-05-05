class Solution {
public:
    int minSteps(int n) {
        return solve(1,n,0,0);
    }
private:
    int solve(int curr,int target,int currmoves,int copied)
    {
        // cout<<curr<<" "<<copied<<endl;
        if(curr==target)return currmoves;
        if(curr>target)return INT_MAX;
        else
        {
            int a=INT_MAX,b=INT_MAX;
            if(curr!=copied)a=solve(curr,target,currmoves+1,curr);
            if(copied!=0)b=solve(curr+copied,target,currmoves+1,copied);
                return min(a,b);
        }
    }
};