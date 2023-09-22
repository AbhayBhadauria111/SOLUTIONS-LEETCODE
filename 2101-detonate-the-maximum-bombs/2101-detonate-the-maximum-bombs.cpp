class Solution {
    int blast(int curr,vector<vector<int>>&bombs,vector<bool>&vis)
    {
        int temp=1;
        vis[curr]=true;
        for(int i=0;i<bombs.size();i++)
        {
            if(!vis[i])
            {
            double dist=sqrt(pow((bombs[curr][0]-bombs[i][0]),2) + pow(bombs[curr][1]-bombs[i][1],2));
                if(dist<=(double)bombs[curr][2])temp+=blast(i,bombs,vis);
            }
        }
        return temp;
    }
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int ans=0;
        vector<bool>vis(bombs.size(),false);
        for(int i=0;i<bombs.size();i++)
        {
            // vector<bool>vis(bombs.size(),false);
            fill(vis.begin(),vis.end(),false);
            ans=max(ans,blast(i,bombs,vis));
            // cout <<i<<" "<<ans<<endl;
        }
        return ans;
    }
};