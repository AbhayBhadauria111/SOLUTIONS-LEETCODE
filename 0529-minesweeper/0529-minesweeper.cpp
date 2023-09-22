class Solution {
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
    void reveal(vector<vector<char>>& board, vector<int> click)
    {
        int i=click[0],j=click[1],n=board.size(),m=board[0].size();
        // cout<<i<<" "<<j;
        if(board[i][j]=='M')
        {
            board[i][j]='X';return;
        }
        int count=0;
        for(auto x:dir)
            {
                int newx=i+x[0];
                int newy=j+x[1];
                if(newx<n and newx>-1 and newy<m and newy>-1 and (board[newx][newy]=='X' or board[newx][newy]=='M') )count+=1;
            }
        // cout<<count<<endl;
        if(count==0)
        {
            board[i][j]='B';
            for(auto x:dir)
                {
                    int newx=i+x[0];
                    int newy=j+x[1];
                    if(newx<n and newx>-1 and newy<m and newy>-1 and (board[newx][newy]=='E' or board[newx][newy]=='M'))
                        reveal(board,{newx,newy});
                }
        }
        else
            board[i][j]=to_string(count)[0];
    }
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        reveal(board,click);
        int n=board.size(),m=board[0].size();
        return board;
    }
};