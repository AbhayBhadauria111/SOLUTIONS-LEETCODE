class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>nodecount;
        for(auto x:edges)
        {
            if(nodecount.find(x[0])==nodecount.end())nodecount[x[0]]=1;
            else nodecount[x[0]]++;
            if(nodecount.find(x[1])==nodecount.end())nodecount[x[1]]=1;
            else nodecount[x[1]]++;
        }
        for(auto x:nodecount){if(x.second>1)return x.first;}
        return 0;
    }
};