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
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(canplace(board[i][j]-'0',i,j))
                    { rows[i][board[i][j]-'0']=true;
                    cols[j][board[i][j]-'0']=true;
                    block[blocknum(i,j)][board[i][j]-'0']=true;}
                    else return false;
                }
            }
        return true;
    }
};