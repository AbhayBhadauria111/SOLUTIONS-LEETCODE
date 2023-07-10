class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        auto x=solve(0,graph);
        for(auto &temp:x)
        {
            temp.push_back(0);
            reverse(temp.begin(),temp.end());
        }
        return x;
    }
private:
    vector<vector<int>>solve(int curr,vector<vector<int>>& graph)
    {
        if(curr==(int)graph.size()-1)return {{}};
        vector<vector<int>>ans;
        for(auto x:graph[curr])
        {
            vector<vector<int>>temp=solve(x,graph);
            for(auto &y:temp)
            {
                y.push_back(x);
                ans.push_back(y);
            }
        }
        return ans;
    }
};