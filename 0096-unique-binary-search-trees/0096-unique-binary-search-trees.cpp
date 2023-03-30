class Solution {
public:
    map<pair<int,int>,int>D;
    int numTrees(int n) {
        int ans=f(1,n);
        return ans;
    }
    int f(int start,int end)
    {
        if(start>=end)return 1;
        if(D[make_pair(start,end)]!=0)return D[make_pair(start,end)];
        int a=0;
        for(int i=start;i<=end;i++)
            a+=f(start,i-1)*f(i+1,end);
        D[make_pair(start,end)]=a;
        return a;
    }
};