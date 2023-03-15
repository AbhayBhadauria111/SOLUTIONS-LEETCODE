class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        map<int,vector<int>>stops;
        for(int i=0;i<routes.size();i++)
        {
            for(int j=0;j<routes[i].size();j++)
                stops[routes[i][j]].push_back(i);
        }
        queue<vector<int>>Q;
        Q.push({source});
        unordered_set<int>stopsSet;
        unordered_set<int>busSet;
        if(source==target)return 0;
        int ans=1;
        // stopsSet.insert(source);
        vector<int>temp;
        vector<int>next;
        while(!Q.empty())
        {
         temp=Q.front();Q.pop();
            next.clear();
            for(auto currstop:temp)
            {
                if(stopsSet.find(currstop)==stopsSet.end())
                {
                    stopsSet.insert(currstop);
                    for(auto bus:stops[currstop])
                    {
                        if(busSet.find(bus)==busSet.end())
                        {
                            busSet.insert(bus);
                            for(int i=0;i<routes[bus].size();i++)
                            {
                               
                                if(target==routes[bus][i])return ans;
                                next.push_back(routes[bus][i]);
                            }
                        }
                    }
                }
            }
            if(next.size()>0)
            Q.push(next);
            ans++;
        }
        return -1;
    }
};