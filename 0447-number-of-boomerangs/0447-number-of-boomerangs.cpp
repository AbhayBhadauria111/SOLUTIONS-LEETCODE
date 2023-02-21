class Solution {
public:
    int distance(vector<int>a,vector<int>b)
    {
        return ((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        map<int,int>dist;
        int temp;
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            dist.clear();
            for(int j=0;j<points.size();j++)
            {
                if(i!=j)
                {temp=distance(points[i],points[j]);
                if(dist.find(temp)==dist.end())dist[temp]=1;
                else dist[temp]++;
                }
            }
            for(auto x:dist)
                if(x.second>1){ans+=x.second*(x.second-1);}
        }
        
        return ans;
    }
};