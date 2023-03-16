class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1)return triangle[0][0];
        for(int i=1;i<triangle.size();i++)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                int b,a;
                b=INT_MAX;
                a=INT_MAX;
                if(j>0)a=triangle[i-1][j-1];
                if(j<triangle[i].size()-1)b=triangle[i-1][j];
                triangle[i][j]+=min(a,b);
                
            }
        }
        return *min_element(triangle[triangle.size()-1].begin(),triangle[triangle.size()-1].end());

    }
};
