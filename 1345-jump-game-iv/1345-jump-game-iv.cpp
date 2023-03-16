class Solution {
public:
    int minJumps(vector<int>& arr) {
        if(arr.size()==1)return 0;
        map<int,vector<int>>indexes;
        vector<bool>visitedInd(arr.size(),false);
        queue<vector<int>>Q;
        for(int i=0;i<arr.size();i++)
            indexes[arr[i]].push_back(i);
        Q.push({0});
        int ans=0;
        vector<int>curr;
        vector<int>next;
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            next.clear();
            for(auto currInd:curr)
            {
                 if(currInd==(arr.size()-1))return ans;
                if(visitedInd[currInd]==false)
                {
                    visitedInd[currInd]=true;
                    if(currInd>0 and visitedInd[currInd-1]==false){next.push_back(currInd-1);}
                    if(visitedInd[currInd+1]==false){next.push_back(currInd+1);}
                    for(auto &nextInd:indexes[arr[currInd]])
                    {
                        if(visitedInd[nextInd]==false)
                        {
                            next.push_back(nextInd);
                        }
                        
                    }
                    indexes[arr[currInd]]={};
                                       
                }
            }
            ans++;
            if(next.size()>0)Q.push(next);
        }
        return 0;
    }
};