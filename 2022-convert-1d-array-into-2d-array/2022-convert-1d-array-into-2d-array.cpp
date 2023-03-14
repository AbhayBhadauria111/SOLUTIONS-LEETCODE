class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n<original.size())return {};
            int t=0;
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<original.size();i++)
        {
            if(t==n){t=0;ans.push_back(temp);temp.clear();}
            {
                t++;
                temp.push_back(original[i]);
            }
        }
        if(temp.size()>0)ans.push_back(temp);
        if(ans.size()==m and ans[0].size()==n)
        return ans;
        return {};
    }
};