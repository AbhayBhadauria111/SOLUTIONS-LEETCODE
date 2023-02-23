class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<bool>nodes(edges.size()+1,false);
        for(vector<int>x:edges)
        {
            if(nodes[x[0]-1]==true)return x[0];
            else nodes[x[0]-1]=true;
            if(nodes[x[1]-1]==true)return x[1];
            else nodes[x[1]-1]=true;
        }
        return 0;
    }
};