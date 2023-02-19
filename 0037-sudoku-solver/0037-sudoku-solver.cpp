class Solution {
public:
    vector<vector<bool>>rows{9,vector<bool>(10,false)};
    vector<vector<bool>>cols{9,vector<bool>(10,false)};
    vector<vector<bool>>block{9,vector<bool>(10,false)};
    bool solved=false;
    bool canplace(int i,int row,int col)
    {
        if(rows[row][i]==true || cols[col][i]==true || block[blocknum(row,col)][i]==true)return false;
        return true;
        }
    int blocknum(int row,int col)
    {
        return (row/3)*3+col/3;
    }
    void solve(vector<vector<char>>& board,int row,int col)
    {
        
        if(solved)return;
        if(row==9)solved=true;
        else if(col==9)solve(board,row+1,0);
        else
        {
            if(board[row][col]=='.')
            {
                for(int i=1;i<=9;i++)
                {
                    if(canplace(i,row,col))
                    {
                        board[row][col]=to_string(i)[0];
                        rows[row][i]=true;
                        cols[col][i]=true;
                        block[blocknum(row,col)][i]=true;
                        solve(board,row,col+1);
                        if(solved)return;
                        board[row][col]='.';
                        rows[row][i]=false;
                        cols[col][i]=false;
                         block[blocknum(row,col)][i]=false;
                    }
                }
            }
            else
            {
                solve(board,row,col+1);
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                {
                    rows[i][board[i][j]-'0']=true;
                    cols[j][board[i][j]-'0']=true;
                    block[blocknum(i,j)][board[i][j]-'0']=true;
                }
            }
        solve(board,0,0);
    }
};