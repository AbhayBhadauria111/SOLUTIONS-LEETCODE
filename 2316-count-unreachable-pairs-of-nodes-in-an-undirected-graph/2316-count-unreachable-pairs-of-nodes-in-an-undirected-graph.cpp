class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long ans=0;
        vector<vector<int>>Routes;
        vector<bool>visited(n,false);
        unordered_map<int,vector<int>>raste;
        for(int i=0;i<edges.size();i++)
        {
            raste[edges[i][0]].push_back(edges[i][1]);
            raste[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            temp.clear();
            if(!visited[i])
            { 
                queue<int>Q;
                temp.push_back(i);
                Q.push(i);
                visited[i]=true;
                while(!Q.empty())
                {
                    int curr=Q.front();Q.pop();
                    for(auto x:raste[curr])
                    {
                        if(!visited[x])
                        {
                            visited[x]=true;
                            Q.push(x);
                            temp.push_back(x);
                        }
                    }
                }
            }
            if(temp.size()>0)
            Routes.push_back(temp);
        }
        int prefixsum=0;
        for(int i=Routes.size()-1;i>=0;i--)
        {
            ans+=Routes[i].size()*prefixsum;
            prefixsum+=Routes[i].size();
        }
        return ans;
    }
};