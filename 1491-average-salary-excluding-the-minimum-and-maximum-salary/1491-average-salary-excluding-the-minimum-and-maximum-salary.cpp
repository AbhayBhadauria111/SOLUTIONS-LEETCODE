class Solution {
public:
    double average(vector<int>& salary) {
        int Max=INT_MIN,Min=INT_MAX;
        double ans=0;
        int count=0;
        for(auto x:salary)
        {
            Max=max(Max,x);
            Min=min(Min,x);
        }
        for(auto x:salary)if(x!=Max and x!=Min){ans+=x;count++;}
        return ans/count;
    }
};