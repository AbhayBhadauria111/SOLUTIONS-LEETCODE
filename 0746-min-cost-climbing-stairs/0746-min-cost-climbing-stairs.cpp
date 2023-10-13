class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int arr[2]={cost[0],cost[1]};
        for(int i=2;i<cost.size();i++)
        {
            arr[i%2]=min(arr[(i-1)%2],arr[(i-2)%2])+cost[i];
        }
        return min(arr[1],arr[0]);
    }                                                                                                                     
};