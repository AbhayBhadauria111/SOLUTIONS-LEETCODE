class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        unordered_map<int,vector<vector<int>>>map;
        auto x=solve(0,graph,map);
        for(auto &temp:x)
        {
            temp.push_back(0);
            reverse(temp.begin(),temp.end());
        }
        return x;
    }
private:
    vector<vector<int>>solve(int curr,vector<vector<int>>& graph,unordered_map<int,vector<vector<int>>>&map)
    {
        if(curr==(int)graph.size()-1)return {{}};
        if(map.find(curr)!=map.end())return map[curr];
        vector<vector<int>>ans;
        for(auto x:graph[curr])
        {
            vector<vector<int>>temp=solve(x,graph,map);
            for(auto &y:temp)
            {
                y.push_back(x);
                ans.push_back(y);
            }
        }
        return map[curr]=ans;
    }
};