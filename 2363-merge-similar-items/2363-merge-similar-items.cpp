class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ans;
        int f=0;
        for(auto x:items1)
        { f=0;
            for(auto &y:items2)
            {
                if(x[0]==y[0]){ans.push_back({x[0],x[1]+y[1]});f=1;y[0]=-1;break;}
            }
        if(f==0)ans.push_back(x);}
        for(auto x:items2)if(x[0]!=-1)ans.push_back(x);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};