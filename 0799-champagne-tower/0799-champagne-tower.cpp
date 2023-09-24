class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured<1)return 0;
        vector<vector<double>>tower;
        tower.push_back({(double)poured});
        poured--;
        for(int i=0;i<query_row;i++)
        {
            vector<double>temp(tower[i].size()+1,0);
            tower.push_back(temp);
            for(int j=0;j<tower[i].size();j++)
            {
                if((tower[i][j]-1)/2.0>0)
                {
                    tower[i+1][j]+=(tower[i][j]-1)/2.0;
                    tower[i+1][j+1]+=(tower[i][j]-1)/2.0;
                }
            }
        }
        // for(auto x:tower)
        // {
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<endl;
        // }
        if(tower[query_row][query_glass]>=1)return 1;
        return tower[query_row][query_glass];
    }
};