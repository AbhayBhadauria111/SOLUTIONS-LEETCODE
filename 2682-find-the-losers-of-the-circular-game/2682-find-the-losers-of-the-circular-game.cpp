class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        unordered_set<int>vis;
        vis.insert(1);
        int curr=1;
        int i=1;
        while(1)
        {
           curr=(curr+i*k)%(n);
            if(curr==0)curr=n;
            if(vis.find(curr)!=vis.end())break;
            vis.insert(curr);
            i++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(vis.find(i)==vis.end())ans.push_back(i);
        }
        return ans;
    }
};