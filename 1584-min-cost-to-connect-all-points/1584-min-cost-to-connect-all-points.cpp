class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
     unordered_map<int,vector<vector<int>>>graph;
        // for(int i=0;i<points.size();i++)graph[i]={};
    for(int i=0;i<points.size();i++)
    {
        for(int j=0;j<points.size();j++)
        {
            if(i==j)continue;
            int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            graph[i].push_back({dist,j});
        }
    }
        vector<bool>mstset(points.size(),false);
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>heap;
        heap.push({0,0});
        int count=0;
        int ans=0;
        while(!heap.empty())
        {
            vector<int>curr=heap.top();heap.pop();
            if(mstset[curr[1]]==true)continue;
            ans+=curr[0];
            mstset[curr[1]]=true;
            count++;
            if(count==points.size())break;
            for(auto x:graph[curr[1]])
            {
                if(mstset[x[1]]==false)heap.push(x);
            }
        }
        return ans;
    }
};