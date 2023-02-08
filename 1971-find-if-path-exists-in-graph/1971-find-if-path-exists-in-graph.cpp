class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)return true;
        map<int,vector<int>>paths;
        for(auto x:edges)
        {
            if(paths.find(x[0])==paths.end())paths[x[0]]={x[1]};
            else paths[x[0]].push_back(x[1]);
            if(paths.find(x[1])==paths.end())paths[x[1]]={x[0]};
            else paths[x[1]].push_back(x[0]);
        }
        vector<bool>visited(n,false);
        visited[source]=true;
        vector<int>tovisit={source};
        int curr;
        while(tovisit.size()!=0)
        {
            curr=tovisit.front();
            tovisit.erase(tovisit.begin());
            for(auto x:paths[curr])
            {
                if(x==destination)return true;
                if(visited[x]==false){tovisit.push_back(x);
                                      visited[x]=true;}  
                
            }
        
        }
        
        return false;
    }
};