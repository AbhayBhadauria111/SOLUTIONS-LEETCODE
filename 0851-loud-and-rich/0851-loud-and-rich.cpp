class Solution {
    vector<int>ans;
    void solve(int curr,unordered_map<int,vector<int>>&graph,vector<int>& quiet,vector<int>&ans)
    {
        if(graph[curr].size()==0)
        {
            ans[curr]=curr;
            return;
        }
        else
        {
            int temp=curr;
            for(auto x:graph[curr])
            {
                if(ans[x]==INT_MAX)solve(x,graph,quiet,ans);
                if(quiet[ans[x]]<quiet[temp])temp=ans[x];
            }
            ans[curr]=temp;
        }
            
    }
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        unordered_map<int,vector<int>>graph;
        for(auto x:richer)
        {
            graph[x[1]].push_back(x[0]);
        }
        ans.resize(quiet.size(),INT_MAX);
        // for(int i=0;i<quiet.size();i++)
        // {
        //     cout<<i<<"=";
        //     for(auto x:graph[i])cout<<x<<" ";
        //     cout<<endl;
        // }
        for(int i=0;i<quiet.size();i++)
        {
            if(ans[i]==INT_MAX)solve(i,graph,quiet,ans);
        }
        return ans;
    }
};