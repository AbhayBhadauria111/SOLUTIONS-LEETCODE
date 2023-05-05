class Solution {
    unordered_map<int,vector<pair<int,double>>>graph;
    void make_graph(const vector<vector<int>>& edges,const vector<double>& succProb)
    {
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(make_pair(edges[i][1],succProb[i]));
            graph[edges[i][1]].push_back(make_pair(edges[i][0],succProb[i]));
        }
    }
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        make_graph(edges,succProb);
        double ans=0;
        vector<double>prob(n,INT_MIN);
        prob[start]=1;
        queue<pair<int,double>>Q;
        pair<int,double>curr;
        Q.push(make_pair(start,1));
        while(!Q.empty())
        {
          curr=Q.front();Q.pop();
            prob[curr.first]=max(prob[curr.first],curr.second);
            // cout<<curr.first<<" ";
            for(auto mypair:graph[curr.first])
            {
                double currprob=curr.second*mypair.second;
                if(currprob>prob[mypair.first])
                {
                    Q.push(make_pair(mypair.first,currprob));
                    // cout<<mypair.first<<" "<<mypair.second<<" ";
                }
            }
        }
        return (prob[end]==INT_MIN)?0:prob[end];
    }
};