class Solution {
public:
    priority_queue<int> MYstones;
    int lastStoneWeight(vector<int>& stones) {
        for(auto x: stones)
        {
            MYstones.push(x);
        }
        int a,b;
        while(MYstones.size()>1)
        {
            a=MYstones.top();
            MYstones.pop();
            b=MYstones.top();
            MYstones.pop();
            if(a==b)continue;
            else{
                MYstones.push(abs(a-b));
            }
        }
        if(MYstones.size())return MYstones.top();
        return 0;
    }
};