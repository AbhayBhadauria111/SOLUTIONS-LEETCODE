class Solution {
public:
    bool canCross(vector<int>& stones) {
        map<int,set<int>>stoneCanReach;
        for(auto x:stones)
        {
            set<int>temp;
            stoneCanReach[x]=temp;
        }
        stoneCanReach[0].insert(1);
        int newpos=0;
        set<int>temp;
        for(auto x:stones)
        {
            temp=stoneCanReach[x];
            for(auto y:temp)
            {
               newpos=y+x;
                if(newpos==stones[stones.size()-1])return true;
                if(stoneCanReach.find(newpos)!=stoneCanReach.end())
                {
                    if(y-1>0)stoneCanReach[newpos].insert(y-1);
                    stoneCanReach[newpos].insert(y);
                    stoneCanReach[newpos].insert(y+1);
                }
            }
        }
        return false;
        
    }
};