class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        set<vector<int>>Dead;
        Dead.clear();
        for(auto x:deadends)
            Dead.insert({int(x[0]-'0'),int(x[1]-'0'),int(x[2]-'0'),int(x[3]-'0')});
     queue<vector<vector<int>>>Q;
        vector<vector<int>>curr;
        vector<vector<int>>next;
        int ans=0;
        curr.push_back({0,0,0,0});
        Q.push(curr);
        while(!Q.empty()){
            curr=Q.front();Q.pop();
            next.clear();
            for(auto x:curr)
            {
                if(notin(Dead,x))
                {
                    if(istarget(target,x))return ans;
                    Dead.insert(x);
                    pushall(next,x);
                }
            }ans++;
         if(next.size()>0)Q.push(next);   
        }
        return -1;
    }
private:
    bool istarget(string target,vector<int>&curr)
    {
        for(int i=0;i<4;i++)
        {
            if(int(target[i]-'0')!=curr[i])return false;
        }
        return true;
    }
    bool notin(set<vector<int>>&Dead,vector<int>&curr)
    {
        if(Dead.find({curr[0],curr[1],curr[2],curr[3]})==Dead.end())return true;
        return false;
    }
    void pushall(vector<vector<int>>&next,vector<int>&curr)
    {
        if(curr[0]!=0 and curr[0]!=9)
        {
            next.push_back({curr[0]+1,curr[1],curr[2],curr[3]});
            next.push_back({curr[0]-1,curr[1],curr[2],curr[3]});
        }
        else
        {
            if(curr[0]==0)
            {
               next.push_back({curr[0]+1,curr[1],curr[2],curr[3]});
                next.push_back({9,curr[1],curr[2],curr[3]});
            }
            if(curr[0]==9)
            {
                next.push_back({curr[0]-1,curr[1],curr[2],curr[3]});
                next.push_back({0,curr[1],curr[2],curr[3]});
            }
        }
        if(curr[1]!=0 and curr[1]!=9)
        {
            next.push_back({curr[0],curr[1]+1,curr[2],curr[3]});
            next.push_back({curr[0],curr[1]-1,curr[2],curr[3]});
        }
        else
        {
            if(curr[1]==0)
            {
               next.push_back({curr[0],curr[1]+1,curr[2],curr[3]});
                next.push_back({curr[0],9,curr[2],curr[3]});
            }
            if(curr[1]==9)
            {
                next.push_back({curr[0],curr[1]-1,curr[2],curr[3]});
                next.push_back({curr[0],0,curr[2],curr[3]});
            }
        }
        if(curr[2]!=0 and curr[2]!=9)
        {
            next.push_back({curr[0],curr[1],curr[2]+1,curr[3]});
            next.push_back({curr[0],curr[1],curr[2]-1,curr[3]});
        }
        else
        {
            if(curr[2]==0)
            {
               next.push_back({curr[0],curr[1],curr[2]+1,curr[3]});
                next.push_back({curr[0],curr[1],9,curr[3]});
            }
            if(curr[2]==9)
            {
                next.push_back({curr[0],curr[1],curr[2]-1,curr[3]});
                next.push_back({curr[0],curr[1],0,curr[3]});
            }
        }
        if(curr[3]!=0 and curr[3]!=9)
        {
            next.push_back({curr[0],curr[1],curr[2],curr[3]+1});
            next.push_back({curr[0],curr[1],curr[2],curr[3]-1});
        }
        else
        {
            if(curr[3]==0)
            {
               next.push_back({curr[0],curr[1],curr[2],curr[3]+1});
                next.push_back({curr[0],curr[1],curr[2],9});
            }
            if(curr[3]==9)
            {
                next.push_back({curr[0],curr[1],curr[2],curr[3]-1});
                next.push_back({curr[0],curr[1],curr[2],0});
            }
        }
    }
};