class Solution {
public:
    int edgeScore(vector<int>& edges) {
       unordered_map<long long,long long>D;
        for(int i=0;i<edges.size();i++)
        {
            D[edges[i]]+=i;
        }
        long long ans=0,maxscore=0;
        for(auto x:D)
        {
            // cout<<x.second<<" "<<maxscore<<endl;
            if(x.second>maxscore)
            {
                maxscore=x.second;
                ans=x.first;
            }
            else if(x.second==maxscore)
            {
                maxscore=x.second;
                ans=min(x.first,ans);
            }
            // cout<<x.first<<" "<<x.second<<" "<<ans<<endl;
        }
        return int(ans);
    }
};