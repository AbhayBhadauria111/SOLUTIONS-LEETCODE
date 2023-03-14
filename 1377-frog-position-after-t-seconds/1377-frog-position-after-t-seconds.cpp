class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        map<int,double>prob;
        prob[1]=1;
        map<int,vector<int>>paths;
        for(auto x:edges)
        {
            paths[x[0]].push_back(x[1]);
            paths[x[1]].push_back(x[0]);
        }
        vector<bool>visited(n+1,0);
        vector<vector<int>>levels;levels.push_back({1});
        vector<int>next;
        while(t and !levels.empty())
        {
            t--;
            vector<int>curr=levels.back();
            next.clear();
            levels.pop_back();
            for(auto x:curr)
            {
                visited[x]=true;
                int count=0;
                for(auto y:paths[x])if(!visited[y])count++;
                for(auto y:paths[x])
                    if(!visited[y])
                    {
                        visited[y]=true;
                        next.push_back(y);
                        double temp=1/double(count);
                        prob[y]=prob[x]*temp;
                    }
                if(count!=0 and t>=0)prob[x]=0;
            }
            levels.push_back(next);
        }
        // cout<<"final"<<endl;
        // for(auto x:prob)cout<<x.first<<" "<<x.second<<" "<<endl;
        return prob[target];
    }
};