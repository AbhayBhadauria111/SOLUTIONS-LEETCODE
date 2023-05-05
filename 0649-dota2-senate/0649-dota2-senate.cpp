class Solution {
public:
    string predictPartyVictory(string senate) {
        int i=0;
        string R="Radiant";
        string D="Dire";
        queue<int>DQ;
        queue<int>RQ;
        int n=senate.size();
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')RQ.push(i);
            else DQ.push(i);
        }
        while(!DQ.empty() and !RQ.empty())
        {
            if(DQ.front()<RQ.front())
            {
                DQ.push(DQ.front()+n);
                DQ.pop();RQ.pop();
            }
            else
            {
                RQ.push(RQ.front()+n);
                RQ.pop();DQ.pop();
            }
        }
        if(!RQ.empty())return R;
        return D;
    }
};