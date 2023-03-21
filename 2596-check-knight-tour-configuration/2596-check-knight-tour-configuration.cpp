class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
     queue<vector<vector<int>>>Q;
        vector<vector<int>>curr;
        vector<vector<int>>next;
        curr.push_back({0,0});
        Q.push(curr);
        int currstep=0;
        vector<vector<int>>dir={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            next.clear();
            for(auto x: curr){
                if(grid[x[0]][x[1]]==currstep){
                    if(currstep==(n*n-1))return true;
                    for(int i=0;i<8;i++)
                    {
                        int newx=x[0]+dir[i][0];
                        int newy=x[1]+dir[i][1];
                        if(canplace(newx,newy,n))
                        {
                            next.push_back({newx,newy});
                        }
                    }
                }
            }
            currstep++;
            if(next.size()>0)Q.push(next);
        }
        return false;
    }
private:
    bool canplace(int x,int y,int n)
    {
        if(x>=0 and x<n and y>=0 and y<n)return true;
        return false;
    }
};