class Solution {
public:
    vector<vector<int>>ans;
    int n;
    void solve(vector<int>&currpath,vector<vector<int>>& graph)
    {
        if(currpath.back()==n-1)ans.push_back(currpath);
        for(auto x:graph[currpath.back()])
        {
            currpath.push_back(x);
            solve(currpath,graph);
            currpath.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n=graph.size();
        vector<int>currpath;
        currpath.push_back(0);
        solve(currpath,graph);
        return ans;
    }
};