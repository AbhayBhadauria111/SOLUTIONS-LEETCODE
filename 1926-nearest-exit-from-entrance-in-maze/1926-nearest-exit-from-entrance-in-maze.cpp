class Solution {
public:
    int n,m;
    deque<vector<int>> places;
    bool isexit(vector<int>temp,vector<vector<char>>& maze)
    {
        if((temp[0]==0 or temp[0]==n-1 or temp[1]==0 or temp[1]==m-1) and maze[temp[0]][temp[1]]=='.')return true;
        return false;
    }
    bool canplace(int i,int j,vector<vector<bool>>&visited,vector<vector<char>>& maze)
           {
               if(i>=0 and i<n and j>=0 and j<m and maze[i][j]=='.' and visited[i][j]==false)return true;
               return false;
           }
    void visit(vector<int>temp,vector<vector<bool>>&visited,vector<vector<char>>& maze)
        {
             if(canplace(temp[0]+1,temp[1],visited,maze))
             {
                 visited[temp[0]+1][temp[1]]=true;
                places.push_back({temp[0]+1,temp[1],temp[2]+1});
             }
            if(canplace(temp[0]-1,temp[1],visited,maze))
               {
                
                 visited[temp[0]-1][temp[1]]=true;
                places.push_back({temp[0]-1,temp[1],temp[2]+1});  
               }
              if(canplace(temp[0],temp[1]+1,visited,maze))
                 {
                   visited[temp[0]][temp[1]+1]=true;
                places.push_back({temp[0],temp[1]+1,temp[2]+1});  
                 }
            if(canplace(temp[0],temp[1]-1,visited,maze))
               {
               visited[temp[0]][temp[1]-1]=true;
                places.push_back({temp[0],temp[1]-1,temp[2]+1});    
               }
        }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        n=maze.size();
        m=maze[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        visited[entrance[0]][entrance[1]]=true;
        places.push_back({entrance[0],entrance[1],0});
        vector<int>temp;
        while(!places.empty())
        {
            
            temp=places.front();
            places.pop_front();
            if(isexit(temp,maze) and !(temp[0]==entrance[0] and temp[1]==entrance[1]))return temp[2];
            visit(temp,visited,maze);
        }    
        return -1;
    }
};