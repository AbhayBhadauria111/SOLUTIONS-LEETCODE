class Solution {
    float dist(int x1,int y1,int x2,int y2)
    {
        return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    }
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
     int ans=1;
        int n=bombs.size();
     for(int i=0;i<n;i++)
     {
         vector<bool>visited(n,false);
         visited[i]=true;
         int count=0;
         queue<vector<int>>Q;
         Q.push(bombs[i]);
         while(!Q.empty())
         {
             vector<int>curr=Q.front();Q.pop();count++;
             for(int j=0;j<n;j++)
             {
                 if(!visited[j] and dist(curr[0],curr[1],bombs[j][0],bombs[j][1])<=curr[2])
                 {
                     Q.push(bombs[j]);
                     visited[j]=true;
                 }
             }
         }
         ans=max(ans,count);
     }
        return ans;
    }
};