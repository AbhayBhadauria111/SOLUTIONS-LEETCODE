class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,int>D;
        unordered_map<int,vector<vector<int>>>grp;
        for(auto x:groupSizes)D[x]+=1;
        for(auto x:D)
        {
            grp[x.first]={};
            int t=(x.second/x.first);
            while(t)
            {
                t--;
                grp[x.first].push_back({});
            }
        }
        for(int i=0;i<groupSizes.size();i++)
        {
            for(auto &x:grp[groupSizes[i]])
            {
                if(x.size()<groupSizes[i])
                {
                    x.push_back(i);
                    break;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto &x:grp)
        {
            for(auto &y:x.second)ans.push_back(y);
        }
        return ans;
    }
};