class Solution {
public:
    vector<vector<string>> ans;
    bool check(int n,int row,int col,vector<string>&board)
    {
	    for(int i = 0; i < n; i++) {
			if(board[i][col] == 'Q') return false; 
		    if(row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q') return false;
		    if(row - i >= 0 && col + i <  n && board[row - i][col + i] == 'Q') return false;
	    }
	    return true;
    }
    void solve(int n,int row,vector<string>&board)
    {
     if(row==n){ans.push_back(board);return;}
    for(int col=0;col<n;col++)
    {
        if(check(n,row,col,board))
        {
            board[row][col]='Q';
            solve(n,row+1,board);
            board[row][col]='.';
        }
    }
       
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        solve(n,0,board);
        return ans;
    }
};