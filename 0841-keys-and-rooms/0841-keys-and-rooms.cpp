class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        visited[0]=true;
        vector<int>keys;
        for(auto x:rooms[0])keys.push_back(x);
        while(keys.size()!=0)
        {
         int curr=keys.front();
        keys.erase(keys.begin());
            visited[curr]=true;
            for(auto x: rooms[curr])
            {
                if(visited[x]==false)
                {keys.push_back(x);
                visited[x]=true;}
            }
            
        }
        for(int i=0;i<rooms.size();i++)if(visited[i]==false)return false;
        return true;
    }
};