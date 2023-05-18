class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1}};
        int n=board.size(),m=board[0].size();
        vector<vector<int>>nbr(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp=0;
                for(auto x:dir)
                {
                    int newx=x[0]+i;
                    int newy=x[1]+j;
                    // cout<<newx<<" "<<newy<<endl;
                    if(newx<n and newy<m and newx>=0 and newy>=0 and board[newx][newy]==1){temp++;}
                }
                nbr[i][j]=temp;
            }
            
                
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==1)
                {
                    if(nbr[i][j]<2)board[i][j]=0;
                    else if(nbr[i][j]>3)board[i][j]=0;
                }
                else
                {
                    if(nbr[i][j]==3)board[i][j]=1;
                }
            }
        }
    }
};