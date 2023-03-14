class Solution {
public:
    int countArrangement(int n) {
        for(int i=0;i<n+1;i++)visited.push_back(false);
        vector<int>currperm;
        currperm.clear();
        solve(currperm,n);
        return ans;
    }
private:
    int ans=0;
    vector<bool>visited;
    void solve(vector<int>&currperm,int n)
    {
        int size=currperm.size();
        if(size==n){ans++;}
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(!visited[i])
                {
                    if((size+1)%i==0 or i%(size+1)==0)
                    {
                        visited[i]=true;
                        currperm.push_back(i);
                        solve(currperm,n);
                        currperm.pop_back();
                        visited[i]=false;
                    }
                    
                }
            }
        }
        
    }
};