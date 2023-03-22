class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         for(int i=0;i<cost.size();i++)
        {
            if(i>1)
            {
                cost[i]+=min(cost[i-1],cost[i-2]);
            }
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};