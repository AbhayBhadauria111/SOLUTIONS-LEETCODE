class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>ans;
        for(int j=0;j<grid[0].size();j++)
        {
            int temp=0;
            for(int i=0;i<grid.size();i++)
            {
                int size=0;
                int num=grid[i][j];
                if(num<0)size++;
                num=abs(num);
                if(num==0)size=1;
                while(num)
                {
                    size++;
                    num=num/10;
                }
                temp=max(temp,size);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};