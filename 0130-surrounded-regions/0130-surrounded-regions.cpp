class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<vector<pair<int,int>>>Q;
        vector<pair<int,int>>curr;
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O'){curr.push_back(make_pair(i,0));board[i][0]='V';}
            if(board[i][m-1]=='O'){curr.push_back(make_pair(i,m-1));board[i][m-1]='V';}
        }
        for(int i=1;i<m-1;i++)
        {
            if(board[0][i]=='O'){curr.push_back(make_pair(0,i));board[0][i]='V';}
            if(board[n-1][i]=='O'){curr.push_back(make_pair(n-1,i));board[n-1][i]='V';}
        }
        Q.push(curr);
        vector<pair<int,int>>next;
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            next.clear();
            for(auto x:curr)
            {
                board[x.first][x.second]='V';
                for(int i=0;i<4;i++)
                {
                    int newx=x.first+dir[i][0];
                    int newy=x.second+dir[i][1];
                    if(newx>=0 and newx<n and newy>=0 and newy<m and board[newx][newy]=='O')next.push_back(make_pair(newx,newy));
                }
            }
            if(next.size()>0)Q.push(next);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='V'){board[i][j]='O';continue;}
                else if(board[i][j]=='O')board[i][j]='X';
        
            }
        }
    
            
    }
};